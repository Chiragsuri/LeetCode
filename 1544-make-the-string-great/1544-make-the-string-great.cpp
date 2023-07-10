class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for (int i = s.length() - 1; i >= 0; i--) {
             if (!st.empty() && (st.top() != s[i] && tolower(st.top()) == tolower(s[i]))) {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
