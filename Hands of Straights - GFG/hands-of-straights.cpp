//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
       		priority_queue<int, vector<int>, greater<int>> pq;
		if(hand.size()%groupSize!=0)
			return false;
		unordered_map<int,int> mp;
		for(int i:hand)
			mp[i]++;
		for(auto it:mp)
			pq.push(it.first);
		while(!pq.empty()){
			int val = pq.top();
			for(int i=0;i<groupSize;i++){
				if(mp.find(val+i) == mp.end())
					return false;
				mp[val+i]--;
				if(mp[val+i]==0){
					if(val+i != pq.top())
						return false;
					pq.pop();
				}
			}
		}
		return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends