"""
# Definition for a Node.
class Node:
    def __init__(self, val: Optional[int] = None, children: Optional[List['Node']] = None):
        self.val = val
        self.children = children
"""

class Solution:
    def postorder(self, root: Node) -> list[int]:
        def recur(node: Node) -> list[int]:
            res: list[int] = []
            if node != None and node.children != None:
                for c in node.children:
                    res += recur(c)

            if node.val != None:
                res.append(node.val)
            return res

        return recur(root)

            

        