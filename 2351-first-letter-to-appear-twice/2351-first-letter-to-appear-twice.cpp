class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        for(auto str:s){
            if(mp.find(str)!=mp.end())
                return str;
            else
                mp[str]++;
        }
        return '0';
    }
};