typedef pair<int,int> pa;
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pa>pq;
        
        int rowSize = mat.size();
        int colSize = mat[0].size();
        int count = 0;
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            pq.push(make_pair(count,i));
            if(pq.size()>k)
            pq.pop();
            count = 0; 
        }
        vector<int>result;
        while(!pq.empty()){
        pair<int,int> temp = pq.top();
        pq.pop();
        result.push_back(temp.second);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};