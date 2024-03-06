import xml.etree.ElementTree as etree

maxdepth = 0
def depth(elem, level):
    global maxdepth
    level += 1
    if level > maxdepth:
        maxdepth = level
    for e in elem:
        depth(e, level)


xml = ""
for _ in range(int(input())):
    xml += input()

tree = etree.ElementTree(etree.fromstring(xml))
depth(tree.getroot(), -1)
print(maxdepth)
