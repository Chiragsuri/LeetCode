class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        // cout<<a<<endl;
        int sum=0;
        while(a!=0){
            sum+=a%2;
            a=a/2;
           cout<<sum<<endl; 
        }
        return sum;
    }
};