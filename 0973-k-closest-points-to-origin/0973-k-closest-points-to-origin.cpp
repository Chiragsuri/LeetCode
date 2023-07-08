typedef pair<int,pair<int,int>> triplet;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<triplet>pq;
        for(int i =0; i<p.size();i++){
            int x = p[i][0];
            int y = p[i][1];
            int dist = x*x + y*y;
            pq.push({dist, {x,y}});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            ans.push_back({x, y});
            pq.pop();
        }
        return ans;
    }
};