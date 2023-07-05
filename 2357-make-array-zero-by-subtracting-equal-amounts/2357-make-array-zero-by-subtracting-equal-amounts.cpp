class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != 0)
                pq.push(nums[i]);
        }
        int move = 0, curr = -1;
        while(!pq.empty()){
            if(pq.top() != curr){
                move++;
                curr = pq.top();
            }
            pq.pop();
        }
        return move;
    }
};