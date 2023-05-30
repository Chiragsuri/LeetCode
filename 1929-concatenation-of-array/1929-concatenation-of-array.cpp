class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans=nums;
        // ans.push_back(nums);
        for(int i =0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        // for(auto it:ans)
        //     cout<<it;
        return ans;
    }
};