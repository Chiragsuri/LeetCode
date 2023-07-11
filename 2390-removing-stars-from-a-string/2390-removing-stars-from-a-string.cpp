class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string ans;
        for(char it:s){
            if(it!='*')
                st.push(it);
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


//Without Stack//

/* class Solution {
public:
    string removeStars(string s) {
        string c="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                c.pop_back();
            }else{
                c+=s[i];
            }
            
        }
        return c;
    }
}; */