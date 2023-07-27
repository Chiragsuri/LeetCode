class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);
        
        for (int i = 0; i < n; i++) {
            int temp = 0;
            
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    temp += code[(i + j) % n];
                }
            } else if (k < 0) {
                for (int j = n - 1; j >= n + k; j--) {
                    temp += code[(i + j) % n];
                }
            }
            
            ans[i] = temp;
        }
        
        return ans;
    }
};