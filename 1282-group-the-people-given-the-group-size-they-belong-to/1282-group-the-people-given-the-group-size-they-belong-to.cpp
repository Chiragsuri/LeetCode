class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> map;
        vector<vector<int>> res;
        
        for (int i = 0; i < groupSizes.size(); i++) {
            int person = i;
            int groupSize = groupSizes[i];
            vector<int>& group = map[groupSize];
            group.push_back(person);
            
            if (group.size() == groupSize) {
                res.push_back(group);
                map.erase(groupSize);
            }
        }
        
        return res;
    }
};