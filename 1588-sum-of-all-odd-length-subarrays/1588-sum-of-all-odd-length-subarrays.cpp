class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& a) {
        int n=a.size();
        int x;
        int s=0;
        
        for(int i=0; i<n; i++){
            x=ceil((((i+1)*(n-i)))/(2.0));
            s+=a[i]*x;
        }
        
        return s;
    }
};