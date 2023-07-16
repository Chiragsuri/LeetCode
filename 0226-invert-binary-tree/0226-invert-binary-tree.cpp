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

//My OG Approach

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

// class Solution {
//   public:
//     TreeNode* invertTree(TreeNode* root) {
//        if (root) {
//            TreeNode* temp = root->left;
//            root->left = root->right;
//            root->right = temp;
//            invertTree(root->left);
//            invertTree(root->right);
//        }
//        return root;
//    }
// };


//Iterative approach
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> s;
        s.push(root);
        
        while (!s.empty()) {
            TreeNode* curr = s.top();
            s.pop();
            if (!curr) continue;
            s.push(curr->left);
            s.push(curr->right);
            swap(curr->left, curr->right);
        }
        return root;
    }
};