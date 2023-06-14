class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int count = 0;
        int i = 0;
        int j = 0;

        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] - arr2[j] > d) {
                j++;
            } else if (arr2[j] - arr1[i] > d) {
                count++;
                i++;
            } else {
                i++;
            }
        }

        count += arr1.size() - i;

        return count;
    }
};
