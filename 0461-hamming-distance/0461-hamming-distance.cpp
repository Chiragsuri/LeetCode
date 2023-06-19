class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        // cout<<a<<endl;
       int cnt=0;
        while(a){
            a=a&(a-1);
            cnt++;
        }
        return cnt;
    }
};