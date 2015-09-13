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



# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        import sys
        return self.helper(root,-sys.maxint-1,sys.maxint+1)
        
    def helper(self, root, min, max):
        if not root: return True
        if root.val > min and root.val<max:
            return self.helper(root.left, min, root.val) and self.helper(root.right, root.val, max)
        else: return False  
