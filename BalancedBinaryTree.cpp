/* definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode *root) {
       if(checkHeightForBalance(root)==-1) return false;
        else return true; 
    }
    
    
    int getHeight(TreeNode *root){
        if (root==NULL) {
            return 0;
        }
        return (1+max(getHeight(root->left),getHeight(root->right)));
    }
    
    int checkHeightForBalance(TreeNode* root){  //return -1 if not balanced
        if(!root) return 0;
        
        int leftHeight=checkHeightForBalance(root->left);
        if (leftHeight==-1) return -1;
        
        int rightHeight=checkHeightForBalance(root->right);
        if (rightHeight==-1) return -1;
        
        int heightDiff=abs(leftHeight-rightHeight);
        if (heightDiff>1) {
            return -1;
        }
        else return max(leftHeight,rightHeight)+1;
    }

    
    
};
