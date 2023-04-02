//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    vector<vector<int>> result;
    void try_combination(vector<int>& combination, int k, int n, int start){
        if(k == combination.size()){
            if(n == 0) result.push_back(combination);
            return;
        }
        for(int i = start; i <= 9; ++i){
            combination.push_back(i);
            try_combination(combination, k, n-i, i+1);
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(int k, int n) {
        vector<int> combination;
        try_combination(combination, k, n, 1);
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends