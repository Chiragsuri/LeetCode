class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        for(int i = 0;i<n;i++){
            temp.push_back(nums[nums[i]]);
        }
        return temp;
    }
};