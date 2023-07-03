class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        if (s == goal) {
            // Check if there are duplicate characters in s
            unordered_set<char> uniqueChars;
            for (char c : s) {
                if (uniqueChars.count(c) > 0)
                    return true;
                uniqueChars.insert(c);
            }
            return false;
        }

        vector<int> diffIndices;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i])
                diffIndices.push_back(i);
        }

        if (diffIndices.size() == 2) {
            int idx1 = diffIndices[0];
            int idx2 = diffIndices[1];
            if (s[idx1] == goal[idx2] && s[idx2] == goal[idx1])
                return true;
        }

        return false;
    }
};
