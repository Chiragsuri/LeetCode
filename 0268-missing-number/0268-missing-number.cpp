class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=0;
        for(auto it:nums)
            result^=it;
        for(int i=0;i<=nums.size();i++)
            result^=i;
        return result;
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int expectedSum = n * (n + 1) / 2;
//         int actualSum = 0;
        
//         for (int num : nums) {
//             actualSum += num;
//         }
        
//         return expectedSum - actualSum;
//     }
// };

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         for(auto it:nums)
//             mp[it]++;
//         for(int i=0;i<=nums.size();i++)
//             if(!mp[i])
//                 return i;
//         return 0;
//     }
// };

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