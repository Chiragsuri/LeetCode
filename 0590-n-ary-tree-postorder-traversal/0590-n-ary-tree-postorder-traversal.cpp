/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>ans;
    
    void solve(Node* root){
        for(auto x: root->children){
            solve(x);
        }
        ans.push_back(root->val);
    }
    
    vector<int> postorder(Node* root) {
        if(!root)
            return ans;
        solve(root);
        return ans;
    }
};