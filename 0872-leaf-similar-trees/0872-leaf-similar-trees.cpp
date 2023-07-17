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
    
    vector<int> solve(TreeNode* root){
        stack<TreeNode*>st;
        st.push(root);
        vector<int>temp;
        while(!st.empty()){
            TreeNode* curr = st.top();
            st.pop();
            if(!curr->left and !curr->right)
                temp.push_back(curr->val);
            if(curr->left)
                st.push(curr->left);
            if(curr->right)
                st.push(curr->right);
        }
        return temp;
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL || root2==NULL)
            return false;
        vector<int>t1 = solve(root1);
        vector<int>t2 = solve(root2);
        for(auto it:t1)
            cout<<it<<" ";
        cout<<endl;
        for(auto it:t2)
            cout<<it<<" ";
        return t1==t2;
        
    }
};