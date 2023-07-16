/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
    
//     TreeNode* invertTree(TreeNode* root) {
//         if(root==NULL) return NULL;
//         TreeNode* invert = new TreeNode(root->val);
//         invert->left = invertTree(root->right);
//         invert->right = invertTree(root->left);
//         return invert;
//     }
// };


//IF we dont need any new tree i.e altering the og tree only
class Solution {
  public:
    TreeNode* invertTree(TreeNode* root) {
       if (root) {
           TreeNode* temp = root->left;
           root->left = root->right;
           root->right = temp;
           invertTree(root->left);
           invertTree(root->right);
       }
       return root;
   }
};