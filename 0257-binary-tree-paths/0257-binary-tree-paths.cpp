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
    
    void solve(TreeNode* root, vector<string>&vs, string s){
        if(!root) return;
        if(!root->left and !root->right){
            s+=to_string(root->val);
            vs.push_back(s);
            s="";
            return;
        }
        s+=to_string(root->val) + "->";
        solve(root->left,vs,s);
        solve(root->right,vs,s);

    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL) return {""};
        vector<string>vs;
        string s;
        solve(root,vs,s);
        return vs;
    }
};