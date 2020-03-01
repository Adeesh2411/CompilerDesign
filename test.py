from prettytable import PrettyTable
x = PrettyTable()
f= open("out.txt","r")
l=f.readline().split("\t")

x.field_names = l

l = f.readline().split(",")

while len(l)>=6:
    x.add_row( [l[0], l[1], l[2], l[3], l[4], l[5],l[6]] )
    l = f.readline().split(",")

    
    
    
   
    
    
print(x)

