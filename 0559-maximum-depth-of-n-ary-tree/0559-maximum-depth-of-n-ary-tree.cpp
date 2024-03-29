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

// class Solution {
// public:
    
//     void solve(Node* root, int &ans, int temp){
//         temp++;
//         ans=max(ans,temp);
//         for(auto x: root->children){
//             solve(x,ans,temp);
//         }    
//     }
    
//     int maxDepth(Node* root) {
//         int ans=0;
//         if(!root)
//             return 0;
//         solve(root,ans,0);
//         return ans;
//     }
// };



//iterative

class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr) return 0;
        queue<Node*> q; q.push(root);
        int depth = 0;
        while (!q.empty()) {
            depth += 1;
            int breadth = q.size();
            for (int _ = 0; _ < breadth; ++_) {
                auto node = q.front(); q.pop();
                for (auto child : node->children) if (child) q.push(child);
            }
        }
        return depth;
    }
};