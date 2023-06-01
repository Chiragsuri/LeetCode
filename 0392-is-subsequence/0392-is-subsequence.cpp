class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len = 0;
        if(size(s) == 0) return true;
        for(char x:t){
            if(x==s[len]) len++;
            if(len == size(s)) return true;
        }
        return false;
    }
};