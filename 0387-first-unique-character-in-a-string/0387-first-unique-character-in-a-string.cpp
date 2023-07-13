class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
       queue<pair<char,int>> q;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            q.push({s[i],i});
        }
        while(!q.empty()){
            if(m[q.front().first]==1) return q.front().second;
            else{
                q.pop();
            }
        }
        return -1;
       
    }
    
};

