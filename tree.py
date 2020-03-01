from anytree import Node, RenderTree, find_by_attr
from anytree.exporter import DotExporter
with open("tree.txt", 'r') as f:
    lines = f.readlines();
    root = Node("Start")

    for line in lines:
        line = line.split(',')
        Node("".join(line[1:]).strip(), parent = find_by_attr(root, line[0]))

    for pre,_,node in RenderTree(root):
        print("%s%s" %(pre, node.name))
        
DotExporter(root).to_picture("AST.png")
