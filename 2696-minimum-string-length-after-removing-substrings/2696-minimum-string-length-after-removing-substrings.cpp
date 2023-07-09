#include <stack>
#include <string>

class Solution {
public:
    int minLength(std::string s) {
        std::stack<char> st;
        
        for (char c : s) {
            if (!st.empty() && isPair(st.top(), c))
                st.pop();
            else
                st.push(c);
        }
        
        return st.size();
    }
    
private:
    bool isPair(char a, char b) {
        if ((a == 'A' && b == 'B') ||
            (a == 'C' && b == 'D'))
            return true;
        
        return false;
    }
};
