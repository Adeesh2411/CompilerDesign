from anytree import Node, RenderTree, find_by_attr
from anytree.exporter import DotExporter
from anytree.dotexport import RenderTreeGraph


root = Node("root")
a=Node("Adeesh", parent=root);
for pre,_,node in RenderTree(root):
    print("%s%s" %(pre, node.name))
