class Solution {               
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int arr[26] = {0};
        for(int i=0; i<s.length(); i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         unordered_map<int,int>m1,m2;
//         for(auto it:s)
//             m1[it]++;
//         for(auto it:t)
//             m2[it]++;
//         return m1==m2;
//     }
// };

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),end(s));
//         sort(begin(t),end(t));
//         return s==t;
//     }
// };