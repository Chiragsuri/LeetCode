class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum = nums[0], curr = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] < nums[i]) {
                curr += nums[i];
            }
            else {
                max_sum = max(max_sum, curr);
                curr = nums[i];
            }
        }
        return max(max_sum, curr);
    }
};
// class Solution {
// public:
//     int maxAscendingSum(vector<int>& nums) {
//         int maxSum = INT_MIN;
//         for (int i = 0; i < nums.size(); i++) {
//             int sum = nums[i];
//             for (int j = i; j < nums.size() - 1; j++) {
//                 if (nums[j] < nums[j + 1])
//                     sum += nums[j + 1];
//                 else
//                     break;
//             }
//             maxSum = max(maxSum, sum);
//         }
//         return maxSum;
//     }
// };