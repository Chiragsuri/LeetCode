class Solution {
public:
    int secondHighest(string s) {
        int max = -1;
        int secondMax = -1;
        for (char c : s) {
            if (c >= '0' && c <= '9') {
                if (c > max) {
                    secondMax = max;
                    max = c;
                }
                else if (c < max && c > secondMax) {
                    secondMax = c;
                }
            }
        }
        return secondMax == -1  ? -1 : secondMax - '0';
    }
};