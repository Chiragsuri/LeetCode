class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return *max_element(nums.begin(),nums.end());  
        sort(nums.begin(),nums.end());
        long long max1=nums[n-1];
        long long max2 = LLONG_MIN;
        long long max3 = LLONG_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<max1 and nums[i]<max2){
                max3=nums[i];
            break;
            }
            else if(nums[i]<max1 and nums[i]>max3)
                max2=nums[i];
        }
        return max3==LLONG_MIN ? max1 : max3;
    }
};
// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         int n = nums.size();
//         if(n<3) return max_element(nums.begin(),nums.end());
        
//         int max=
//         for(int i=0;i<n;i++){
            
//         }
//     }
// };
