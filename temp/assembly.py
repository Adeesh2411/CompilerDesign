import sys
import copy
f = open("optimisedIcode.txt")
R = [0,0,0,0,0,0,0,0,0,0,0,0,0]
Free = [1,1,1,1,1,1,1,1,1,1,1,1,1]
stack = []
lines = f.readlines()
mapR={} #actual : Rnum
branch = {'<=':'BLE', '>=':'BGE','<':'BLT', '>':'BGT', '!=':'BNE', '==':"BEQ"}
operate ={'*':'MUL', '+':'ADD', '-':'SUB', '/':'DIV'}
x=1

startingAddr = 999


def getHex():
    global startingAddr
    startingAddr+=1;
    return hex(startingAddr)


def getFreeR(x1=x):
    for i in range(len(Free)):
        if(Free[i]):
            Free[i] = 0
            return i
    print("//Note : registers are empty !! Moving to stack")
    for i in mapR:
        mapR[i] = mapR[i] +"_"+ str(x1)
    x1=x1+1
    stack.append(copy.deepcopy(R))
    
    for i in range(len(Free)):  
        Free[i] = 1
    for i in range(len(Free)):
        if(Free[i]):
            Free[i] = 0
            return i    

def binaryOp(part):

    num = part[1]
    num = num.strip()
    num = num.split(' ')
    if(num[0].isnumeric()):
        temp = getFreeR()
        free1 = "R"+str(temp)
        print(getHex() + "\t: MOV "+free1+", #"+num[0])        
        R[temp] = num[0]

    else:
        free1 = mapR[num[0]]
        if len(free1[1:]) >2:
            stackNo = int(free1[-1])-1
            print("//Note : Getting value of register R"+free1[-1]+" from Stack")
            temp = getFreeR()
            cur = "R"+str(temp)
            R[temp] = stack[stackNo][int(free1[-3])-1]
            val = num[0].strip()
            mapR.pop(val)
            mapR[val] = cur
            free1 = mapR[val]

    if(num[2].isnumeric()):
        temp = getFreeR()
        free2 = "R"+str(temp)
        print(getHex() + "\t: MOV R"+str(temp)+", #"+num[2])
        R[temp] = num[2]
    else:
        free2 = mapR[num[2]]
        if len(free2[1:]) >2:
            stackNo = int(free2[-1])-1
            print("//Note : Getting value of register R"+free2[-1]+" from Stack")
            temp = getFreeR()
            cur = "R"+str(temp)
            R[temp] = stack[stackNo][int(free2[-3])-1]
            val = num[2].strip()
            mapR.pop(val)
            mapR[val] = cur
            free2 = mapR[val]
    freeRegister = getFreeR()
    rhs = part[0].strip()[part[0].index('.')+1:]

    R[freeRegister] = num[2]
    mapR[rhs.strip()] = "R"+str(freeRegister)
    print(getHex() + "\t: "+operate[num[1]] + " R"+str(freeRegister) +  ", "+free1 + ", "+free2)
    
    
    
def unaryOp(part):
    first = part[0]
    if '.' in first:
        name = first[first.index('.')+1:].strip()
    else:
        name = first[first.index(':')+1:].strip()
    val = part[1].strip()
    
    if val.isnumeric():
        temp = getFreeR()
        free = "R"+str(temp)
        print(getHex() + "\t: MOV "+free+", #"+str(val))
        mapR[name] = free
        R[temp] = val
        if "(Mem)" in name:
            print(getHex() + "\t: STR "+free+", ["+name[5:]+"]")    
        
    else:
        free = mapR[val]
        
        if len(free[1:]) >2:
            stackNo = int(free[-1])-1
            print("//Note : Getting value of register R"+free[-1]+" from Stack")
            temp = getFreeR()
            cur = "R"+str(temp)
            R[temp] = stack[stackNo][int(free[-3])-1]
            mapR.pop(val)
            mapR[val] = cur
            free = mapR[val]
            
            
             
        if "(Mem)" in name:
            print(getHex() + "\t: STR "+free+", ["+name[5:]+"]")
        else:
            temp = getFreeR()
            cur = "R"+str(temp)
            print(getHex() + "\t: MOV "+cur+", "+free)
            R[temp] = val
            mapR[name] = cur
     
        
    
if __name__ =="__main__": 
    for line in lines:
        visit = False;
        
        
        if line[:4] == "goto":
            print(getHex() + "\t: B "+line[4:].strip())
        if ':' in line:
            label = line.split(':')
            for i in range(len(label)-1):
                print(getHex() + "\t: "+label[i].strip() + " : ")

        if ":" in line and 'goto' in line and line.split(':')[1].strip()[:4] == 'goto':
            print(getHex() + "\t: " + "B "+line.split(':')[1].strip()[4:])
        
        if "if" in  line:
            start = line.index("(")
            end = line.index(")")
            val1 = line[start+1:end]
            visit =True
            for i in branch:
                if i in val1:
                    factor = i
                    spl = val1.split(i)
                    break
            
            if spl[0].strip().isnumeric():
                temp = getFreeR()
                cur1 = "R"+str(temp)                
                R[temp] = spl[0].strip()
                print(getHex() + "\t: MOV "+cur1+", #"+spl[0].strip())
                #print("CMP "+cur1, end = "")
            else:
                val =spl[0].strip()
                free = mapR[val]
                
                if len(free[1:]) >2:
                    stackNo = int(free[-1])-1
                    print("//Note : Getting value of register R"+free[-1]+" from Stack")
                    temp = getFreeR()
                    cur = "R"+str(temp)
                    R[temp] = stack[stackNo][int(free[-3])-1]
                    mapR.pop(val)
                    mapR[val] = cur
                    free = mapR[val]
                cur1 = free             
                #print("CMP "+free, end="")

            if spl[1].strip().isnumeric():
                temp = getFreeR()
                cur2 = "R"+str(temp)                
                R[temp] = spl[0].strip()
                print(getHex() + "\t: MOV "+cur2+", #"+spl[1].strip())
            else:
                val = spl[1].strip()
                free = mapR[val]
                
                if len(free[1:]) >2:
                    stackNo = int(free[-1])-1
                    print("//Note : Getting value of register R"+free[-1]+" from Stack")
                    temp = getFreeR()
                    cur = "R"+str(temp)
                    R[temp] = stack[stackNo][int(free[-3])-1]
                    mapR.pop(val)
                    mapR[val] = cur
                    free = mapR[val]         
                cur2= free    
            print(getHex() + "\t: CMP "+cur1+", "+cur2)
            ind = line.index("goto")+5
            print(getHex() + "\t: "+branch[factor]+" "+line[ind:].strip())
        #arithmetic opeartion
        if '=' in line and visit == False:
            part = line.split('=')
            temp = len(part[1].strip().split(' ')) 
            if temp == 3:
                binaryOp(part)
                
            elif temp == 1:
                unaryOp(part)
    print("SWI 0x11")
                     
            
            
            
