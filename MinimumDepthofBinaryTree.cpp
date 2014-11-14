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


/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public int minDepth(TreeNode root) {
        if(root==null) return 0;
        int minDepth = 1;
        int currentLevelCount = 0;
        int nextLevelCount = 0;
        
        LinkedList<TreeNode> q = new LinkedList<TreeNode>();
        q.add(root);
        currentLevelCount++;
        while(!q.isEmpty()){
            TreeNode cur = q.remove();
            currentLevelCount--;
            
            if(cur.left!=null){
                nextLevelCount ++;
                q.add(cur.left);
            }
            
            if(cur.right!=null){
                nextLevelCount ++;
                q.add(cur.right);
            }
            if(cur.right==null && cur.left==null){
                return minDepth;
            }
            
            if(currentLevelCount==0){
                minDepth++;
                currentLevelCount=nextLevelCount;
                nextLevelCount=0;
            }
            
        }
        return Integer.MAX_VALUE;
    }
}
