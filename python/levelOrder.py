# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    # BFS Iterative solution 
    # Time complexity - O(n) | Space complexity - O(n)
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if not root:
            return root
        res = []
        nodes = deque([root])
        while nodes:
            l = len(nodes)
            temp = []
            for i in range(l):
                node = nodes.popleft()
                if node:
                    temp.append(node.val)
                    nodes.append(node.left)
                    nodes.append(node.right)
           
            if len(temp)>0:
                res.append(temp)
        return res
    