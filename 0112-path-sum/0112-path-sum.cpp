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
    bool solve(TreeNode* root, int target, int sum) {
        if (!root)
            return false;

        sum += root->val;

        if (!root->left && !root->right) {
            return (sum == target);
        }

        bool leftPath = solve(root->left, target, sum);
        bool rightPath = solve(root->right, target, sum);

        return leftPath || rightPath;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)
            return false;

        return solve(root, targetSum, 0);
    }
};
