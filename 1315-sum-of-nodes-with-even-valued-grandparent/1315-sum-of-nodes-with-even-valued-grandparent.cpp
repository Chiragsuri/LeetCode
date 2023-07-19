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
    int sumEvenGrandparent(TreeNode* root) {
        if (!root)
            return 0;
        
        queue<pair<TreeNode*, TreeNode*>> q; 
        q.push({root, nullptr});
        int sum = 0;

        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                auto [curr, parent] = q.front(); 
                q.pop();

                if (!curr->left && !curr->right)
                    continue;

                if (parent && parent->val % 2 == 0) { // Check if the parent node has an even value
                    if (curr->left)
                        sum += curr->left->val;
                    if (curr->right)
                        sum += curr->right->val;
                }

                
                if (curr->left)
                    q.push({curr->left, curr});
                if (curr->right)
                    q.push({curr->right, curr});
            }
        }
        return sum;
    }
};
