// class Solution {
// public:
//     double myPow(double x, long long n) {
//         if(n==0 || x==1)
//             return 1;
//         if(x==0)
//             return 0;

//         if(n<0)
//             return myPow(1/x,abs(n));

//         return (n%2==0 ? myPow(x*x,n/2) : x*myPow(x*x,n/2));
//     }
// };

class Solution {
public:
    double myPow(double x, int n) {        
        if(n < 0) {
            x = 1 / x;
        }         
        long num = labs(n);        
        double pow = 1;        
        while(num){ // equivalent to while(num != 0)
            if(num & 1) { // equivalent to if((num & 1) != 0)
                pow *= x;
            }            
            x *= x;
            num >>= 1;
        }        
        return pow;
    }
};