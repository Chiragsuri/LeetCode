class Solution {
public:
    int specialArray(vector<int>& nums) {
    int maxNum = *max_element(nums.begin(), nums.end());

    sort(nums.begin(),nums.end());
        for(int i=0;i<=maxNum;i++){
            int left=0;
            int right=nums.size()-1;
            while (left <= right) {
            int mid = left + (right - left) / 2;
            int count = nums.size() - mid;

            if (nums[mid] >= count && (mid == 0 || nums[mid - 1] < count)) {
                return count;
            } else if (nums[mid] < count) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        }
        return -1;
    }
};