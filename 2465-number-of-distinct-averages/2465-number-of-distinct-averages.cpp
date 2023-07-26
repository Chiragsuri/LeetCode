class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        unordered_set<double> a;
        int count = 0;
        
        while (i <= j) {
            int maxi = nums[j];
            int mini = nums[i];
            double avg = (maxi + mini) / 2.0;
            
            if (a.find(avg) == a.end()) {
                a.insert(avg);
                count++;
            }
            
            i++;
            j--;
        }
        
        return count;
    }
};