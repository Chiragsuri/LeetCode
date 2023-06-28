class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp;
        for(auto s:sentence){
            if(mp.find(s)==mp.end())
                mp[s]++;
        }
        return mp.size()==26;
    }
};