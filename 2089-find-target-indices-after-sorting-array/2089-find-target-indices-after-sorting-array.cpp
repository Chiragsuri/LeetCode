class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int mincnt =0,maxcnt=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]<target) mincnt++;
            else if (nums[i]>target) maxcnt++;
        }
        int ub = size(nums)-maxcnt-1; //upper bound of the indexies 
        
        vector<int>ans;
        for(int i=mincnt;i<=ub;i++){
            ans.push_back(i);
        }
        return ans;
    }
};