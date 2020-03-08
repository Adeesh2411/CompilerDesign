from anytree import Node, RenderTree, find_by_attr

with open('input.txt', 'r') as f:
    lines = f.readlines()[1:]
    root = Node(lines[0].split(" ")[0])
    nodes = {}
    nodes[root.name] = root

    for line in lines:
        line = line.split(" ")
        name = "".join(line[1:]).strip()
        nodes[name] = Node(name + "Ads", parent=nodes[line[0]])

    for pre, _, node in RenderTree(root):
        print("%s%s" % (pre, node.name))
