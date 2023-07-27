class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            int sum = nums[i];
            for (int j = i; j < nums.size() - 1; j++) {
                if (nums[j] < nums[j + 1])
                    sum += nums[j + 1];
                else
                    break;
            }
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};