class Solution {
public:
    int trap(vector<int>& v) {
        int n=v.size();
        stack<int> s;
        int ans=0;
        for(int i=0;i<n;i++){
            while(!s.empty()&&v[s.top()]<v[i]){
                int cur=s.top();
                s.pop();
                if(s.empty())break;
                int diff=i-s.top()-1;
                ans+=(min(v[s.top()],v[i])-v[cur])*diff;
            }
            s.push(i);
        }
        return ans;
    }
};