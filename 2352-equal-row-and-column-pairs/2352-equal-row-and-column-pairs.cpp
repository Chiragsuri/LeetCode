class Solution {
public:
    
    void solve(vector<vector<int>>& grid, vector<int>& col, int& count, int& n){
        for(int i=0;i<n;i++){
            if(col==grid[i]){
                count++;
            }
        }
    }
    
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m = grid[0].size();
        int c=0;
        while(c<m){
            vector<int>col;
            for(int i=0;i<m;i++){
                col.push_back(grid[i][c]);
            }
            solve(grid,col,count,n);
            c++;
        }
        return count;
    }
};