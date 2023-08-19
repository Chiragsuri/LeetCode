class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     
        vector<int>ans=digits;
        int i=digits.size()-1;
        ans[i]++;
        int carry=0;
        while(i>=0){
            ans[i]+=carry;
            carry=ans[i]/10;
            ans[i]%=10;
            i--;
        }
        cout<<carry;
        if(carry)
            ans.insert(ans.begin(),carry);
        return ans;
    }
};