class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (const auto& row : grid) {
            count += binarySearchCount(row);
        }
        return count;
    }

private:
    int binarySearchCount(const vector<int>& row) {
        int left = 0;
        int right = row.size() - 1;
        int count = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (row[mid] < 0) {
                count += right - mid + 1;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return count;
    }
};






