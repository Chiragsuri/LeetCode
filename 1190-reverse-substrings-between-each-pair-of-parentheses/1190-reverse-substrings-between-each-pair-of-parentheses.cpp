class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string temp = s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if(s[i] == ')'){
                int start = st.top();
                st.pop();
                reverse(temp.begin() + start, temp.begin() + i);
            }
        }
        string ans;
        for(auto it : temp){
            if(it != '(' && it != ')')
                ans += it;
        }
        return ans;
    }
};
