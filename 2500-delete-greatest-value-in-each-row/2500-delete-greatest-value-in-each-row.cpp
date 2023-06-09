class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) 
    {
        int n = grid.size();                   // row
        int m = grid[0].size();                // col
        int answer = 0;
        for(int i=0;i<n;i++)
        {sort(grid[i].begin(),grid[i].end(),greater<>()); }                 // sort each row in dexreasing order as we need max value from whole row
        // it will store the column as row and we will took the greatest from that particular row
        for(int i=0;i<m;i++)
        {   int mx = INT_MIN;
            for(int j=0;j<n;j++)
            {
                mx = max(mx,grid[j][i]);               // storing mx for curr column                               
            }
             
            answer += mx;                                // add up the max value of column to answer
        }
        return answer;
    }
};
