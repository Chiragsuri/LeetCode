class Solution {
public:
    int bs(vector<int>&arr,int start, int end, int k){
        if(start>end)
        return -1;
        int mid=(start+end)/2;
        if(k==arr[mid])
        return mid;
        else if(k<arr[mid])
        return bs(arr,start,mid-1,k);
        else
        return bs(arr,mid+1,end,k);
    }
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int k = target;
        int ans = bs(nums,start,end,k);
        return ans;
    }
};