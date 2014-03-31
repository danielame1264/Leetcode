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
