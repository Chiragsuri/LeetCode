class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int ele = arr[i];
            bool flag = true;
            while (!st.empty() && (st.top() > 0 && ele < 0)) {
                if (abs(ele) > abs(st.top())) {
                    st.pop();
                }
                else if (abs(ele) == abs(st.top())) {
                    flag = false;
                    st.pop();
                    break;
                }
                else {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                st.push(ele);
            }
        }
        vector<int> res(st.size());
        int i = st.size() - 1;
        while (!st.empty()) {
            res[i--] = st.top();
            st.pop();
        }
        return res;
    }
};