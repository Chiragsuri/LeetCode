// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxPro=0;
//         int minPrice=INT_MAX;
//         for(int price:prices){
//             minPrice=min(minPrice,price);
//             maxPro=max(maxPro,price-minPrice);
//         }
//         return maxPro;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }
};