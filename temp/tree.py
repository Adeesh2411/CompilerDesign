from anytree import Node, RenderTree, find_by_attr
from anytree.exporter import DotExporter
from anytree.dotexport import RenderTreeGraph

with open("tree.txt", 'r') as f:
    lines = f.readlines();

    root = Node("Start (0)");
    for line in lines:
        line = line.split(',')
        
        par = line[0].strip()
        name = line[1].strip()

        Node(name, parent = find_by_attr(root, par))

    #for pre,_,node in RenderTree(root):
    #    print("%s%s" %(pre, node.name))
        


DotExporter(root,
            nodeattrfunc = lambda node:"fixedsize = false",indent = 2).to_picture("AST.png")
