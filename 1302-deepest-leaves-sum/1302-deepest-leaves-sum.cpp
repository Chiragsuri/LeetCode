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
    int deepestLeavesSum(TreeNode* root) {
        if (!root)
            return 0;

        int depth = 0;
        vector<pair<int,int>>v;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            depth++;
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (!curr->left && !curr->right){
                    v.push_back({curr->val,depth});
                }
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
        }
        int ans=0;
        for(auto it:v){
            if(it.second==depth)
                ans+=it.first;
        }
        return ans;
    }
};
