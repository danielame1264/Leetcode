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
    int minDepth(TreeNode *root) {
        if (root==NULL) {
            return 0;
        }
        queue<TreeNode*> q;
        int currentLevelCount=1;  //
        int nextLevelChildCount=0;
        int minDepth=1;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode *root = q.front();
            q.pop();
            currentLevelCount--;
            
            if (root->left==NULL && root->right==NULL) {
                return minDepth;
            }
            
            if(root->left) {
                q.push(root->left);
                nextLevelChildCount++;
            }
            if(root->right){
                q.push(root->right);
              nextLevelChildCount++;  
            } 

            if (currentLevelCount==0) {
                minDepth++;
                currentLevelCount=nextLevelChildCount;
                nextLevelChildCount=0;
            }
        }
        return INT32_MAX;  // actually won't come here?
    }
};
