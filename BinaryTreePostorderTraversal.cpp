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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> tra;
        post(root,tra);
        return tra;
        
    }
    void post(TreeNode *root, vector<int> &tra){
        if(root==NULL) return;
        post(root->left,tra);
        post(root->right,tra);
        tra.push_back(root->val);  
    
    }

    
};
