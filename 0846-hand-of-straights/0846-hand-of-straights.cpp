class Solution {
public:
      bool isNStraightHand(vector<int>& hand, int groupSize) {
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