class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>m1,m2;
        for(auto it:s)
            m1[it]++;
        for(auto it:t)
            m2[it]++;
        return m1==m2;
    }
};

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),end(s));
//         sort(begin(t),end(t));
//         return s==t;
//     }
// };