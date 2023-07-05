typedef pair<int,int> pi;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (auto num : nums) freq[num]++;
        
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for (auto x : freq) {
            pq.push(make_pair(x.second,x.first));
            if(pq.size()>k)
                pq.pop();
            
        }
        
        vector<int> res;
        while (!pq.empty()) {
            pair<int,int> temp = pq.top();
            pq.pop();
            res.push_back(temp.second);
        }
        
        return res;
    }
};