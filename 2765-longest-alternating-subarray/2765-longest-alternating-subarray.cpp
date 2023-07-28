class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
    int n = nums.size();
    int maxi = -1;

    for(int i = 0; i < n-1; i++) {
        bool ch = false;

        for(int j = i + 1; j < n; j++) {
            if(!ch) {
                if(nums[j] - nums[j-1] == 1) {
                ch = true;
                maxi = max(maxi, j - i + 1);
                } else {
                break;
                }
            } else {
                if(nums[j] - nums[j-1] == -1) {
                ch = false;
                maxi = max(maxi, j - i + 1);
                } else {
                break;
                }
            }
        }
    }

    return maxi;
    }
};