class Solution {
public:
    string concatinate(int a,int b){
        return to_string(a)+to_string(b);
    }
    long long findTheArrayConcVal(vector<int>& nums) {
        // long long int mod=1e19+7;
        long long int ans=0;
        long long int n =nums.size(); 
        long long int i=0, j=n-1;
        if(n%2!=0) ans+=nums[(n+1)/2-1];
        while(i<j){
            string s = concatinate(nums[i],nums[j]);
            cout<<s<<endl;
            (ans+=stoi(s));
            i++;
            j--;
        }
        return ans;
    }
};