class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        for (int i = 1; i <= *max_element(groupSizes.begin(), groupSizes.end()); i++) {
            vector<int> subans;
            for (int j = 0; j < groupSizes.size(); j++) {
                if (groupSizes[j] == i) {
                    if (subans.size() >= i) {
                        ans.push_back(subans);
                        subans.clear();
                    }
                    subans.push_back(j);
                }
            }
            if (subans.size()) {
                ans.push_back(subans);
            }
        }
        return ans;
    }
};
// class Solution {
// public:
//     vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
//         unordered_map<int, vector<int>> map;
//         vector<vector<int>> res;
        
//         for (int i = 0; i < groupSizes.size(); i++) {
//             int person = i;
//             int groupSize = groupSizes[i];
//             vector<int>& group = map[groupSize];
//             group.push_back(person);
            
//             if (group.size() == groupSize) {
//                 res.push_back(group);
//                 map.erase(groupSize);
//             }
//         }
        
//         return res;
//     }
// };