//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        unordered_map<char,int> mp;  
    int count=0;
    int i=0; int j=0;
    int end=s.size()-1;

    while(j<s.size()){
        //calculations while travsering j 
        mp[s[j]]++;

        //when window size is less than reqd
        if(mp.size()<3){
            //we need to traverse j 
            j++;
        }
        else if(mp.size()==3){
            //once it reached, we save the count and shrink the window size from left 
            // till the time, we have 3 distinct chars, we can go on calculating count and increase i but not increasing j
            //eg input 'aaacb' 
            while(mp.size()==3){
                count+=1+end-j;
                mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
            }
            j++;
        }
    } return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends