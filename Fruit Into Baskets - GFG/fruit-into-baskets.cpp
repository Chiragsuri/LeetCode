//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        unordered_map<int, int> count; 
        int i=0,j=0;
        while(j<fruits.size()){
            count[fruits[j]]++; 
            if (count.size() > 2) { 
                if (--count[fruits[i]] == 0)count.erase(fruits[i]); 
                i++; 
            }
            j++;
        }
        return j - i;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends