class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int i = 0; i < arr.size(); i++) freq[arr[i]]++;
        unordered_set<int> freq_set;
        for (auto x : freq)
         freq_set.insert(x.second);
        return freq.size()==freq_set.size();
}
};