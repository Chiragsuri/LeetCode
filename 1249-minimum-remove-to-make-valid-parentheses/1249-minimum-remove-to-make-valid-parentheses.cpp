class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        int count = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    s.erase(i, 1);
                    i--; // Decrementing i to recheck the current position
                }
            }
        }
        
        while (!st.empty()) {
            int r = st.top();
            s.erase(r, 1);
            st.pop();
        }
        
        return s;
    }
};