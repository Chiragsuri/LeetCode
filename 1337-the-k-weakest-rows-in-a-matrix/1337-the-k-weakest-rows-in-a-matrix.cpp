typedef pair<int, int> pa;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pa> pq;
        
        int rowSize = mat.size();
        int colSize = mat[0].size();
        
        
        for (int i = 0; i < rowSize; i++) {
            int left = 0;
            int right = colSize - 1;
            
            while (left <= right) {
                int mid = left + (right - left) / 2;
                
                if (mat[i][mid] == 1) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            
            pq.push(make_pair(left, i));
            
            if (pq.size() > k) {
                pq.pop();
            }
            
        }
        
        vector<int> result;
        
        while (!pq.empty()) {
            pair<int, int> temp = pq.top();
            pq.pop();
            result.push_back(temp.second);
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
