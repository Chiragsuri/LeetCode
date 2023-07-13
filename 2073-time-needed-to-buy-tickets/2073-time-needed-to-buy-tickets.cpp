class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> q;
        for (int i = 0; i < tickets.size(); i++) {
            if (i == k)
                q.push({ tickets[i], 1 });
            else
                q.push({ tickets[i], 0 });
        }

        pair<int, int> temp = { 0, 0 };
        int cnt = 0;
        while (!q.empty()) {
            cnt++;
            temp = q.front();
            q.pop();
            if (temp.first - 1 > 0) {
                q.push({temp.first-1,temp.second});
            }
            if (temp.first-1 == 0 && temp.second == 1)
                break;
        
        }
        return cnt;
    }
};