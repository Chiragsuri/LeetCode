class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.length()==0){
            return (s.length()==0);
        }
        vector<vector<int>> v(s.length()+1,vector<int> (p.length()+1,-1));
      return  helper(s,p,0,0,v);
      
    }
    bool helper(string s, string p,int i,int j,vector<vector<int>> &v)
    {
        if(j==p.length())
            return (i==s.length());
        if(v[i][j]<0){
        if(i==s.length())
            v[i][j]= (p[j]=='*' && helper(s,p,i,j+1,v));
        else if(i<s.length() &&  (p[j]==s[i] || p[j]=='?'))
        {
           v[i][j]=  helper(s,p,i+1,j+1,v);
        }
        
        else if(p[j]=='*')
        {
            v[i][j]= (helper(s,p,i,j+1,v) || helper(s,p,i+1,j,v));
        }
        else
        v[i][j]= false;
        }
        return v[i][j];
    }
};