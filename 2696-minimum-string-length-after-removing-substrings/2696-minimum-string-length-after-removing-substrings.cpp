class Solution {
public:
    int minLength(string s) {
        stack<char> st1, st2;
        
        for (char c : s) {
            st1.push(c);
        }
        
        while (!st1.empty()) {
            if (!st2.empty() && isPair(st2.top(), st1.top())) {
                st2.pop();
            } else {
                st2.push(st1.top());
            }
            
            st1.pop();
        }
        
        return st2.size();
    }
    
private:
    bool isPair(char a, char b) {
        if ((a == 'B' && b == 'A') ||(a == 'D' && b == 'C'))
            return true;
        
        return false;
    }
};



//single stack

// class Solution {
// public:
//     int minLength(string s) {
//         stack<char> st;
        
//         for (char c : s) {
//             if (!st.empty() && isPair(st.top(), c))
//                 st.pop();
//             else
//                 st.push(c);
//         }
        
//         return st.size();
//     }
    
// private:
//     bool isPair(char a, char b) {
//         if ((a == 'A' && b == 'B') ||
//             (a == 'C' && b == 'D'))
//             return true;
        
//         return false;
//     }
// };
