class Solution {
public:
    
    unordered_set<int> vis;
    map<int, vector<int>> M;
    
    void dfs(int node, vector<int> &nums) {
        vis.insert(node);
        nums.push_back(node);
        
        for(auto &it: M[node]) {
            if(!vis.count(it)) {
                dfs(it, nums);
            }
        }
    }
    
    vector<int> restoreArray(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> nums;
      
        for(auto &ad: adj) {
            int u = ad[0], v = ad[1];
            M[u].push_back(v);
            M[v].push_back(u);
        }
        
        int src;
        
        for(auto [a, b]:M) {
            if(b.size() == 1) {
                src = a;
                break;
            }
        }
        
        dfs(src, nums);
        
        return nums;
    }
};