class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stackS, stackT;

        for (char c : s) {
            if (c == '#' && !stackS.empty()) {
                stackS.pop();
            } else if (c != '#') {
                stackS.push(c);
            }
        }

        for (char c : t) {
            if (c == '#' && !stackT.empty()) {
                stackT.pop();
            } else if (c != '#') {
                stackT.push(c);
            }
        }

        return stackS == stackT;
    }
};
