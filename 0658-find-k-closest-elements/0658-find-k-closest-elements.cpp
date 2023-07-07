typedef pair<int,int> pa;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pa,vector<pa>, greater<pa>>diffpq;
        
        for(auto it:arr){
            diffpq.push({abs(it-x),it});
        }
        vector<int>ans;
        while(k--){
        ans.push_back(diffpq.top().second);
            diffpq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};



//// already done by max heap

// typedef pair<int,int> pa;
// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         priority_queue<pa>diffpq;
        
//         for(auto it:arr){
//             diffpq.push({abs(it-x),it});
//             if(diffpq.size()>k)
//             diffpq.pop();
//         }
//         vector<int>ans;
//         while(!diffpq.empty()){
//         ans.push_back(diffpq.top().second);
//             diffpq.pop();
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
        
//     }
// };