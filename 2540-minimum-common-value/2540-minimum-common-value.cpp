class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        if (n1 > n2) {
            swap(nums1, nums2);
            swap(n1, n2);
        }

        for (int num : nums1) {
            int left = 0;
            int right = n2 - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (nums2[mid] == num) {
                    return num;  
                } else if (nums2[mid] < num) {
                    left = mid + 1;  
                } else {
                    right = mid - 1; 
                }
            }
        }

        return -1; 
    }
};