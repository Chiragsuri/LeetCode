// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (n == 1)
            return 1;

        int left = 1;
        int right = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid) && !isBadVersion(mid - 1))
                return mid;
            else if (isBadVersion(mid))
                right = mid - 1;
            else
                left = mid + 1;
        }

        return -1; // No bad version found
    }
};