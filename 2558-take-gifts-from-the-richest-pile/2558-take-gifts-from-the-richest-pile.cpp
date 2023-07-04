class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq(gifts.begin(),gifts.end());
        
        while(k--){
            long long temp = pq.top();
            pq.pop();
            pq.push(sqrt(temp));
        }
        long long total = 0;
        while (!pq.empty()) {
            total += pq.top();
            pq.pop();
        }
        return total;
    }
};