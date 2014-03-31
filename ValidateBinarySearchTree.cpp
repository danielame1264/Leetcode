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
    bool isValidBST(TreeNode *root) {
       return isBSTHelper(root,INT32_MIN,INT32_MAX); 
    }
    
    bool isBSTHelper(TreeNode* root, int min, int max){
        if(root==NULL) return 1;
        if(root->val<min || root->val>max) return 0;
        return (isBSTHelper(root->left, min, root->val-1) && isBSTHelper(root->right, root->val+1, max));
        
        
//        if(root==NULL) return 1;
//        vector<int> vec;
//        inorderArray(root,vec);
//        for (int i=0; i<vec.size()-1; ++i) {
//            if (vec[i]>=vec[i+1])
//                return false;
//        }
//        return true;
/*   static TreeNode *previous =NULL;
   if(root){
       if(!isValidBST(root->left)) return false;
       if(previous!=NULL && root->val<=previous->val) return false;
       previous=root;
       return isValidBST(root->right);
       
       }
         return true;
         */
         
         
    }
    
//        void inorderArray(TreeNode* treeNode, vector<int> &vec){
//        if(treeNode==NULL) return;
//        int i= treeNode->val;
        
//        inorderArray(treeNode->left, vec);
//        vec.push_back(treeNode->val);
        
//        inorderArray(treeNode->right, vec);
//    }

};
