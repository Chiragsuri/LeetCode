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
    void solve(TreeNode* root, unordered_map<int,int>& mp) {
        if (root->left)
            solve(root->left, mp);
        
        mp[root->val]++;
        
        if (root->right)
            solve(root->right, mp);
    }
    
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mp;
        solve(root, mp);
        
        int maxFreq = 0;
        for (auto it : mp) {
            maxFreq = max(maxFreq, it.second);
        }
        
        vector<int> modes;
        for (auto it : mp) {
            if (it.second == maxFreq) {
                modes.push_back(it.first);
            }
        }
        
        return modes;
    }
};