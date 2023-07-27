class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);
        
        for (int i = 0; i < n; i++) {
            int temp = 0;
            
            if (k > 0) {
                for (int j = i + 1; j <= i + k; j++) {
                    temp += code[j % n];
                }
            } else if (k < 0) {
                for (int j = i - 1; j >= i + k; j--) {
                    temp += code[(j + n) % n];
                }
            }
            
            ans[i] = temp;
        }
        
        return ans;
    }
};