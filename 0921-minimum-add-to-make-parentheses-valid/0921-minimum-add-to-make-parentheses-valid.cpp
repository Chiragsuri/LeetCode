class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    count++;
                }
            }
        }
        
        count += st.size();  // Adding the remaining unbalanced opening parentheses
        
        return count;
    }
};

//Without Stack//

/*class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0;
        
        int ans = 0;
        
        for (auto it : s) {
            if (it == '(') {
                left++;
            } else {
                if (left > 0) {
                    left--;
                } else {
                    ans++;
                }
            }
        }
        
        ans += left;
        
        return ans;
    }
};
*/
