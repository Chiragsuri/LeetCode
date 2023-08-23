/* 1. There are 26 letters in our alphabet and we start counting from 1, not zero.
    So 'Z' is 26.
 2. The rest of the combinations start from a base 26 */


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char c : columnTitle)
        {
            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};