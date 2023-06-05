class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first=0;
        int second=0;
        for( auto it: nums){
            if( it > first ){
                second = first;
                first = it;
                
            }else if( it > second ){
                second = it;
            }
            
        }
        return (first-1)*(second-1);
    }
};