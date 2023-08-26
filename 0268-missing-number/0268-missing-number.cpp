class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        for(int i=0;i<=nums.size();i++)
            if(!mp[i])
                return i;
        return 0;
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         for(int i=0;i<=nums.size();i++){
//             if(find(nums.begin(),nums.end(),i)==nums.end())
//                 return i;
//         }
//         return 0;
//     }
// };