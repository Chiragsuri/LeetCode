class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1])
            return nums[0];
        int l = 0;
        int r = nums.size()-1;
        while(r>l){
            int mid = (l+r)/2;
            if(nums[mid]>nums[r]) 
                l = mid+1;
            else if(nums[mid]<nums[r]) 
                r=mid;
            else
                r--;
        }
        return nums[r];
    }
};