class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto it : operations) {
            if(it == "C" and !st.empty()) {
                    st.pop();
            }
            else if(it == "D" and !st.empty()) {
                    st.push(2 * st.top());
            }
            else if(it == "+" and st.size()>=2) {
                    int top = st.top();
                    st.pop();
                    int newTop = top + st.top();
                    st.push(top);
                    st.push(newTop);
            }
            else {
                st.push(stoi(it));
            }
        }
        int ans = 0;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};

