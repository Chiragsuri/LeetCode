//Since, each element in the array is in range [1,n], it means we can use array elements as index for the same array
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        
        for( int i=0; i < nums.size(); i++)
        {
            int n = abs(nums[i]); 
            if(nums[n-1] > 0)
                nums[n-1] = -nums[n-1]; // marking -ve
        }
        for( int i=0; i < nums.size(); i++)
        {
            if(nums[i]>0)
                res.push_back(i+1);
        }
        return res;
    }
};

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n = size(nums);
//         vector<int>a(n,0);
//         for(auto it:nums)
//             a[it-1]++;
//         vector<int>ans;
//         for(int i=0;i<n;i++){
//             if(a[i]==0)
//                 ans.push_back(i+1);
//         }
//         return ans;
//     }
// };
