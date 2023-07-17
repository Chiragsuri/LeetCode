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
    void solve(TreeNode* root, string& s) {
        s += '(' + to_string(root->val);
        
        if (root->left || root->right) {
            if (root->left)
                solve(root->left, s);
            else
                s += "()";
        }
        
        if (root->right)
            solve(root->right, s);
        
        s += ')';
    }
    string tree2str(TreeNode* root){
        if(root==NULL)
            return "";
        string s;
        solve(root,s);
        s.erase(0,1);
        s.pop_back();
        return s;
    }
};