class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp; unordered_map<string,char> mps;int j = 0,i=0;
        for(i = 0;i<pattern.size();i++){
            string temp ;
            while(j<s.size()){
                temp.push_back(s[j++]);
                if(s[j]==' ') {j++;break;}
            }
            if(mp.count(pattern[i]) || mps.count(temp)){  
                if(mp[pattern[i]]!=temp) return false;
            }
            else mp[pattern[i]] = temp,mps[temp] = pattern[i];
            if(j==s.size()) {i++;break;}
        }
        return j==s.size() and i==pattern.size();
    }
};