import re
label = {}
remove=[]
d={}
scope = 0
bracket = 0
lineNo=0
dep=[]
indp=[]

with open("Icode.txt",'r') as f:
    lin = f.readlines()
    for lines in lin:     
        lineNo+=1
      
        if '=' in lines:
            ind = lines.index('=')
            if ':' in lines:
                start = lines.index(':')
                given = lines[start+2:ind].strip()
            else:
                given = lines[:ind].strip()
            if given in d and bracket == d[given][1] and scope >= d[given][0]:
                remove.append(d[given][2])

            res = lines[ind+2:-1]
            resList = re.split("-|\*|\+|/",res)
            for i in range(len(resList)):
                resList[i] = resList[i].strip()
            flag = True
            for val in resList:
                if (val.isalpha and val in d and d[val][3] ) or val.isnumeric():
                    pass
                else:    
                    flag = False
                    break
                
            if flag:
                d[given] = [scope, bracket, lineNo, 1]
            else:
                d[given] = [scope, bracket, lineNo, 0]
        
        if ':' in lines:
            ind = lines.index(':')
            label[lines[:ind]] = lineNo
            
            
            
for i in d:
    print(i, "=", d[i])
    
print()
for i in remove:
    print(i)
                
