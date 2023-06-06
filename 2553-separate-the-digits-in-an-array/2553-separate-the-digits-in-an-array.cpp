class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            string str = to_string(nums[i]);
            for(int j = 0; j < str.size(); j++)
            {
                ans.push_back((int)(str[j] - 48));
            }
        }
        return ans;
    }
};