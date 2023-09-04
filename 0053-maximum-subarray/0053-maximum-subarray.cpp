class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ///kadane algo//
        int sum=0;
        int maxi=nums[0];
        for(int num:nums){
            sum=sum+num;
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};