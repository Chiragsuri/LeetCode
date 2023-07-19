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
        queue<TreeNode*> q;
        q.push(root);
        int sum=0;
        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                TreeNode* curr = q.front();
                q.pop();

                if (!curr->left && !curr->right)
                    continue;

                if(curr->val%2==0){
                    if(curr->left and curr->left->left!=NULL)
                        sum+=curr->left->left->val;
                        // cout<<curr->left->left->val;
                    if(curr->left and curr->left->right!=NULL)
                        sum+=curr->left->right->val;
                        // cout<<curr->left->right->val;
                    if(curr->right and curr->right->left!=NULL)
                        sum+=curr->right->left->val;
                        // cout<<curr->right->left->val;
                    if(curr->right and curr->right->right!=NULL)
                        sum+=curr->right->right->val;
                        // cout<<curr->right->right->val;
                }
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
        }
        return sum;
    }
};