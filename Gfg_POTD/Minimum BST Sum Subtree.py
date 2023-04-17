#python
import sys

class Solution:
    ans = sys.maxsize
    
    def solve(self, node, target):
        if not node:
            return (1, -sys.maxsize-1, sys.maxsize, 0, 0)
        
        left = self.solve(node.left, target)
        right = self.solve(node.right, target)
        
        if left[0] == 1 and right[0] == 1 and left[1] < node.data < right[2]:
            total = left[3] + right[3] + node.data
            if total == target:
                self.ans = min(self.ans, left[4] + right[4] + 1)
            return (1, max(right[1], node.data), min(left[2], node.data), total, left[4]+right[4]+1)
        
        return (0, 0, 0, 0, 0)
        
    def minSubtreeSumBST(self, target, root):
        #code here
        self.solve(root, target)
        if self.ans == sys.maxsize:
            return -1
        return self.ans
