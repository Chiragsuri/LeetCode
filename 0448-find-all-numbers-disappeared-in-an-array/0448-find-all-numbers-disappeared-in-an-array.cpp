class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = size(nums);
        vector<int>a(n,0);
        for(auto it:nums)
            a[it-1]++;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                ans.push_back(i+1);
        }
        return ans;
    }
};
