class Solution {
public:
    int arrangeCoins(int n) {
        for(long long int i=1;i<=n;i++){
            if((i*(i+1))/2 > n)
                return i-1;
            else if((i*(i+1))/2 == n)
                return i;
        }
        return 0;
    }
};