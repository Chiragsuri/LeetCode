class Solution {
public:
    string convert(std::string s, int numRows) {
        if (numRows <= 1 || s.length() <= numRows) {
            return s;
        }
        int len = s.length();
        vector<int> vis(len, 0);
        string ans = s.substr(0, 1);
        vis[0] = 1;
        int diagonal = numRows - 2;
        int i = numRows + diagonal, j = 0;

        while (ans.length() != len) {
            if (i >= 0 && i < len && !vis[i]) {
                ans += s[i];
                vis[i] = 1;
            }
            i += numRows + diagonal - 2 * j;
            if (i >= 0 && i < len && !vis[i]) {
                ans += s[i];
                vis[i] = 1;
            }
            i += 2 * j;
            if (i >= len) {
                j++;
                i = j;
            }
        }

        return ans;
    }
};
