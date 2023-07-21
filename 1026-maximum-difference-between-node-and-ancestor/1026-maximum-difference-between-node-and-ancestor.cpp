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
    void solve(TreeNode* root, vector<int>& path, vector<int>& diffs) {
        if (!root) return;
        
        
        path.push_back(root->val);
        
        
        if (!root->left && !root->right) {
            int minVal = *min_element(path.begin(), path.end());
            int maxVal = *max_element(path.begin(), path.end());
            diffs.push_back(maxVal - minVal);
        }
        
        solve(root->left, path, diffs);
        solve(root->right, path, diffs);
        
        
        path.pop_back();
    }

    int maxAncestorDiff(TreeNode* root) {
        if (root == nullptr) return 0;
        
        vector<int> path;
        vector<int> diffs;
        
        solve(root, path, diffs);
        
        return *max_element(diffs.begin(), diffs.end());
    }
};