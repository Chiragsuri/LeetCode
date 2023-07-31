class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0)
                ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int>ans;
//         unordered_map<int,int>mp;
//         for(auto it:nums)
//             mp[it]++;
//         for(auto it:mp)
//             if(it.second==2)
//                 ans.push_back(it.first);
//         return ans;
//     }
// };