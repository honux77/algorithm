def pre(node, q):
    if not node:
        return
    pre(node.left, q)
    q.append(node.val)
    pre(node.right, q)

class Solution:
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        q = []
        pre(root, q)
        return q[k - 1]
