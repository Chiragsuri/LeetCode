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
    
    void solve(Node* root, int &ans, int temp){
        temp++;
        ans=max(ans,temp);
        for(auto x: root->children){
            solve(x,ans,temp);
        }    
    }
    
    int maxDepth(Node* root) {
        int ans=0;
        if(!root)
            return 0;
        solve(root,ans,0);
        return ans;
    }
};