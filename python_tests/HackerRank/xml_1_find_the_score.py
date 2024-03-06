import sys
import xml.etree.ElementTree as etree

def get_attr_number(node):
    return sum((len(child.attrib) for child in node.iter()))

xml = ""
for _ in range(int(input())):
    xml += input()

tree = etree.ElementTree(etree.fromstring(xml))
root = tree.getroot()
print(get_attr_number(root))