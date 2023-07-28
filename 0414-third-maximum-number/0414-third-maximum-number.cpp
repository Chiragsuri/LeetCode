class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return *max_element(nums.begin(), nums.end());  
        
        long long max1 = LLONG_MIN;
        long long max2 = LLONG_MIN;
        long long max3 = LLONG_MIN;
        
        for(auto num : nums) {
            if(num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if(num < max1 && num > max2) {
                max3 = max2;
                max2 = num;
            }
            else if(num < max2 && num > max3) {
                max3 = num;
            }
        }
        
        return max3 == LLONG_MIN ? max1 : max3;
    }
};
// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         int n = nums.size();
//         if(n<3) return *max_element(nums.begin(),nums.end());  
//         sort(nums.begin(),nums.end());
//         long long max1=nums[n-1];
//         long long max2 = LLONG_MIN;
//         long long max3 = LLONG_MIN;
//         for(int i=n-1;i>=0;i--){
//             if(nums[i]<max1 and nums[i]<max2){
//                 max3=nums[i];
//             break;
//             }
//             else if(nums[i]<max1 and nums[i]>max3)
//                 max2=nums[i];
//         }
//         return max3==LLONG_MIN ? max1 : max3;
//     }
// };
