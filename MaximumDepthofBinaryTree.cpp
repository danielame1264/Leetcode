tion for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode *root) {
     if (root==NULL) {
            return 0;
        }
        return (1+max(maxDepth(root->left),maxDepth(root->right)));  
    }
  
   /*     if(!root) return 0;
        stack<TreeNode*> s;
        s.push(root);
        int depth=0;
        TreeNode *previous =NULL;
        while (!s.empty()) {
            TreeNode *current=s.top();
            if(!previous || previous->left == current || previous->right == current){
                if(current->left) s.push(current->left);
                if(current->right) s.push(current->right);
            }
            else if(current->left == previous){
                if(current->right) s.push(current->right);
            }
            else{
                s.pop();
            }
            previous=current;
            if(s.size() >depth) depth=(int)s.size();
        }
        return depth;
        
    }
 */   
};


# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # this is top down. Quite a lot of duplicated calculation
        # if not root: return 0
        # else:
        #     return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))
        
        # of course you can do bfs
        # from collections import deque
        # if not root: return 0
        # depth = 0
        # this = deque([root])
        # next = deque([])

        # while True:
        #     while len(this)>0:
        #         current = this.popleft()
        #         if current.right: next.append(current.right)
        #         if current.left: next.append(current.left)
        #     depth+=1
        #     if not next: break
        #     else:
        #         this = next
        #         next = deque([])
        # return depth
        
        if root == None:
            return 0
        nodeStack = [root];
        depthStack = [1];
        maxDepth = 0;
        while len(nodeStack)>0:
            node = nodeStack.pop();
            depth = depthStack.pop();
            maxDepth = maxDepth if maxDepth > depth else depth
            if node.left != None:
                nodeStack.append(node.left)
                depthStack.append(depth+1)
            if node.right != None:
                nodeStack.append(node.right)
                depthStack.append(depth+1)
        return maxDepth
