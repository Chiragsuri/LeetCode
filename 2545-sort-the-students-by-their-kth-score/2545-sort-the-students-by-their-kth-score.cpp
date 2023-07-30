class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,int>>v;
        int n = score.size();
        int m = score[0].size();
        for(int i=0;i<n;i++){
            v.push_back({score[i][k],i});
        }
        sort(begin(v),end(v), greater());
        
        vector<vector<int>>ans(n, vector<int> (m, 0));
        for(int i=0 ; i<score.size();i++){
            for(int j=0;j<score[0].size();j++){
                ans[i][j] = score[v[i].second][j];
            }
        }
        return ans;
    }
};