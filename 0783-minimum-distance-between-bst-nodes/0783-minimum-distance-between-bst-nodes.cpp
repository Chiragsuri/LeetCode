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
    int minDiffInBST(TreeNode* root) {
        if (!root) return 0;
        
        int minDiff = INT_MAX;
        TreeNode* prev = nullptr;
        
        inorderTraversal(root, prev, minDiff);
        
        return minDiff;
    }
    
    void inorderTraversal(TreeNode* node, TreeNode*& prev, int& minDiff) {
        if (!node) return;
        
        inorderTraversal(node->left, prev, minDiff);
        
        if (prev) {
            minDiff = min(minDiff, node->val - prev->val);
        }
        
        prev = node;
        
        inorderTraversal(node->right, prev, minDiff);
    }
};