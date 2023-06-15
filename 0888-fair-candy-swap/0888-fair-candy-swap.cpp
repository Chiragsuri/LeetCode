class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int>ans;
        int s1=0,s2=0;
        for(auto i:aliceSizes) s1+=i;
        for(auto i:bobSizes) s2+=i;
        for(auto i:aliceSizes){
            for(auto j:bobSizes){
                if((s1-i+j)==s2-j+i){
                    ans.push_back(i);
                    ans.push_back(j);
               return ans;    
                }
            }
        }
    return ans;
    }
};