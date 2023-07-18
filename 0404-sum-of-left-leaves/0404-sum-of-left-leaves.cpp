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
class Solution {
public:
    
    int solve(TreeNode* root, int& sum, bool isLeft){
        if(!root) return 0;
        if(!root->left and !root->right){
            if(isLeft){
            sum+=root->val;
            return sum;
            }
            else return 0;
        }
        solve(root->left,sum,1);
        solve(root->right,sum,0);
        return 0;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum=0;
        solve(root,sum,0);
        return sum;
    }
};