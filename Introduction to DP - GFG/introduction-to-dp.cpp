//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

vector<long long int> dp(100001, 0);
long long int mod = 1e9+7;

class Solution {
  private:
    long long int topDownHelper(int n, vector<long long int> &dpt){
        if(n <= 1) return n;
        
        if(dpt[n] != -1) return dpt[n];
        
        return dpt[n] = (topDownHelper(n-1, dpt) + topDownHelper(n-2, dpt)) % mod;
    }
    
  public:
    long long int topDown(int n) {
        vector<long long int> dpt(n+1, -1);
        return topDownHelper(n, dpt);
    }
    long long int bottomUp(int n) {
        vector<long long int> dpb(n+1, 0);
        
        dpb[0] = 0;
        dpb[1] = 1;
        
        for(int i=2;i<=n;i++){
            dpb[i] = (dpb[i-1] + dpb[i-2]) % mod;
        }
        return dpb[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends