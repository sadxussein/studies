class Node:
    def __init__(self, L, R, n):
        self.left = L
        self.right = R
        self.value = n


def tree_by_levels(node):
    if node is None:
        return []
    else:
        nodes = [node, node.left, node.right]
        n = 1
        next_parents_start_index = 1
        while True:
            level_children_pool = [False for _ in range(2 ** (n + 1))]
            j = 0
            for i in range(next_parents_start_index, next_parents_start_index + 2 ** n):
                if nodes[i] is not None:
                    if nodes[i].left is not None:
                        level_children_pool[j] = True
                        j += 1
                    else:
                        j += 1
                    if nodes[i].right is not None:
                        level_children_pool[j] = True
                        j += 1
                    else:
                        j += 1
                    nodes.append(nodes[i].left)
                    nodes.append(nodes[i].right)
                else:
                    nodes.append(None)
                    nodes.append(None)
                    j += 2
            next_parents_start_index += 2 ** n
            n += 1
            if not any(level_children_pool):
                break
        res = []
        for n in nodes:
            if n is not None:
                res.append(n.value)
        return res


print(tree_by_levels(None), [])
print(tree_by_levels(
    Node(Node(Node(None, None, 1), Node(None, None, 3), 8), Node(Node(None, None, 4), Node(None, None, 5), 9), 2)),
      [2, 8, 9, 1, 3, 4, 5])
print(tree_by_levels(Node(Node(None, Node(None, None, 4), 2), Node(Node(None, None, 5), Node(None, None, 6), 3), 1)),
      [1, 2, 3, 4, 5, 6])
