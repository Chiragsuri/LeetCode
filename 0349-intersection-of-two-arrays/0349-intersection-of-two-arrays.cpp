#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()) {
            return {};
        }

        sort(nums1.begin(), nums1.end());

        vector<int> ans;
        for (int num : nums2) {
            if (binarySearch(nums1, num) && find(ans.begin(), ans.end(), num) == ans.end()) {
                ans.push_back(num);
            }
        }

        return ans;
    }

private:
    bool binarySearch(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return true;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};
