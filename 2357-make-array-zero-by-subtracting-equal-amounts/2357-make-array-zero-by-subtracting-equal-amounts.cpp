class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(auto it:nums){
            if(it>0)
                mp[it]++;
        }
        for(auto it: mp){
            if(it.second>0)
                count++;
        }
        return count;
    }
};