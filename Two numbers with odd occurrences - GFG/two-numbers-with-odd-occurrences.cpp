//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        vector<long long int> twoOddNum(long long int arr[], long long int N) {
            int xorVal = 0, setBit = 0, first = 0, second = 0;
            for(int i=0;i<N;i++){
                xorVal ^= arr[i];
            }
            setBit = xorVal & ~(xorVal-1); // to find the rightmost set bit
            for(int i=0;i<N;i++){
                if(arr[i] & setBit){
                    first ^= arr[i];
                }else{
                    second ^= arr[i];
                }
            }
            vector< long long int> ans;
            if(first<second){
                ans.push_back(second);
                ans.push_back(first);
            }else{
                ans.push_back(first);
                ans.push_back(second);
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends