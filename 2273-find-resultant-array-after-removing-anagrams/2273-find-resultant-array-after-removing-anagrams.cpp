class Solution {
public:
    vector<string> removeAnagrams(vector<string>& strs) {
        stack<string> s;
         vector<string> ans;
        
            for(int i=0;i<strs.size();i++){
                string temp=strs[i];
                sort(temp.begin(),temp.end());
               if( s.size()==0 || s.top()!=temp){
                   ans.push_back(strs[i]);
                   s.push(temp);
               }
            }     
    return ans;
    }
};