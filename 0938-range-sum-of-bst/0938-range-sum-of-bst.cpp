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
    void dfs(TreeNode* root, int L, int R, int&rangeSum){
        if(!root) return;
        if(root->val>=L && root->val<=R) rangeSum+=root->val;
        if(root->val > L) dfs(root->left,L,R,rangeSum);
        if(root->val < R) dfs(root->right,L,R,rangeSum);
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        int rangeSum = 0;
        dfs(root,L,R,rangeSum);
        return rangeSum;
    }
};


// class Solution {
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         if (!root) return 0;
        
//         int sum = 0;
//         if (root->val >= low && root->val <= high)
//             sum += root->val;
        
//         sum += rangeSumBST(root->left, low, high);
//         sum += rangeSumBST(root->right, low, high);
        
//         return sum;
//     }
// };