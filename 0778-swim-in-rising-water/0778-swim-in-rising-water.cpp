class Solution {
private:
    bool isValid(int nr,int nc,int n){
        return (nr>=0 && nc>=0 && nr<n && nc<n);
} 
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        vector<vector<int>> vis(n,vector<int>(n,0));
        pq.push({grid[0][0],{0,0}}); //(maxHeightTillNow,row,column)
        int dx[] = {-1,0,1,0};
        int dy[] = {0,-1,0,1};

        int ans;
        while(!pq.empty()){

            auto el = pq.top();
            pq.pop();

            int height = el.first;
            int r = el.second.first;
            int c = el.second.second;
            if(r==n-1 && c==n-1){
                ans = height;
                break;
            }
            for(int i=0;i<4;i++){
                int nr = r + dx[i];
                int nc = c + dy[i];
                if(isValid(nr,nc,n) && vis[nr][nc]==0){
                    pq.push({max(height,grid[nr][nc]),{nr,nc}});
                    vis[nr][nc]=1;
                }
            }
        }
        return ans;
    }
};
