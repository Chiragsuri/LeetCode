class Solution {
public:
    int specialArray(vector<int>& nums) {
    int maxNum = *max_element(nums.begin(), nums.end());

    for (int x = 0; x <= maxNum; x++) {
        int count = 0;

        for (int num : nums) {
            if (num >= x) {
                count++;
            }
        }

        if (count == x) {
            return x;
        }
    }

    return -1;
}
};