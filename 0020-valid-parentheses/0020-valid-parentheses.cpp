class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto c: s){
            if(st.empty())
                st.push(c);
            else if((st.top()=='[' and c==']') || (st.top()=='{' and c=='}') || (st.top()=='(' and c==')'))
                st.pop();
            else st.push(c);
        }
        return st.size()==0;
    }
};