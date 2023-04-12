class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i=0,j=0,ans=INT_MIN,n=nums.size(),count_Zero=0;
        while(j<n)
        {
            if(nums[j]==0){
               count_Zero++;
            }
            while(count_Zero>k)
            {
                if(nums[i]==0){
                    count_Zero--;
                }
                i++;
            }
           ans=max(ans,j-i+1);
           j++; 
        }
        return ans;
    }
};