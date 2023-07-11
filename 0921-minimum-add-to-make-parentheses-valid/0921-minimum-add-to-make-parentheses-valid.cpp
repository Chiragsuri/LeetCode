class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0;
        
        int ans = 0;
        
        for (auto it : s) {
            if (it == '(') {
                left++;
            } else {
                if (left > 0) {
                    left--;
                } else {
                    ans++;
                }
            }
        }
        
        ans += left;
        
        return ans;
    }
};
