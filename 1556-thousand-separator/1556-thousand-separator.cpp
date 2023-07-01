class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        int len = s.length();
        
        for (int i = len - 3; i > 0; i -= 3) {
            s.insert(i, ".");
        }
        
        return s;
    }
};
