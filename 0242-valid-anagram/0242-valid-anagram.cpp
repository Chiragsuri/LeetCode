class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),end(s));
        sort(begin(t),end(t));
        return s==t;
    }
};