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
    
    
    void solve(TreeNode* root, vector<int>&v){
        if(!root) return;
        solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>v;
        solve(root,v);
        TreeNode* temp = new TreeNode(v[0]);
        TreeNode* dummy = temp;
        for(int i=1;i<v.size();i++){
            dummy->right=new TreeNode(v[i]);
            dummy=dummy->right;
        }
        return temp;
    }
};