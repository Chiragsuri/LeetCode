class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        for (char c : s) {
            if (i > 0 && s[i - 1] == c) {
                i--;
            } else {
                s[i++] = c;
            }
        }
        
        return s.substr(0, i);
    }
};

