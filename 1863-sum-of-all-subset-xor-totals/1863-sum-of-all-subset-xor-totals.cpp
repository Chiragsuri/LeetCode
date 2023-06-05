class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int curr=0;
        int len=nums.size();
      return XORsum(nums,curr,len-1);
    }
    
    int XORsum(vector<int>& nums,int curr,int index){
    
    if(index<0) return curr;
    int notPick = XORsum(nums,curr,index-1);
    int pick = XORsum(nums,curr^nums[index],index-1);
    
    return notPick + pick;
    
    
}
};