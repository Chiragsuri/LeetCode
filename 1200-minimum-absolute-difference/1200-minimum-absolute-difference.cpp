class Solution {
public:
      vector<vector<int>> minimumAbsDifference(vector<int>& A) {
    sort(A.begin(), A.end());
    vector<vector<int>> V;
    int n = A.size(), minDiff = INT_MAX;
    
    for (int i = 1; i < n; i++) {
        int diff = A[i] - A[i - 1];
        
        if (diff < minDiff) {
            minDiff = diff;
            V.clear();
        }
        
        if (diff == minDiff) {
            V.push_back({A[i - 1], A[i]});
        }
    }
    
    return V;
}

};