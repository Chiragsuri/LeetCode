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
    pair<int, int> dfs(TreeNode* root) {
        if (!root)
            return {0, 0};
        
        pair<int, int> left = dfs(root->left);
        pair<int, int> right = dfs(root->right);
        
        int sum = left.first + right.first + root->val;
        int count = left.second + right.second + 1;
        
        return {sum, count};
    }
    
    int averageOfSubtree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        int count = 0;
        
        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop();
            
            pair<int, int> subtree = dfs(current);
            
            if (subtree.first / subtree.second == current->val)
                count++;
            
            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }
        
        return count;
    }
};