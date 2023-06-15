class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    int aliceTotal = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
    int bobTotal = accumulate(bobSizes.begin(), bobSizes.end(), 0);
    int targetDiff = (bobTotal - aliceTotal) / 2;

    sort(bobSizes.begin(), bobSizes.end());

    for (int aliceCandy : aliceSizes) {
        int targetBobCandy = aliceCandy + targetDiff;
        int left = 0;
        int right = bobSizes.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (bobSizes[mid] == targetBobCandy) {
                return { aliceCandy, targetBobCandy };
            }
            else if (bobSizes[mid] < targetBobCandy) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
    }

    // If no valid pair is found, return an empty vector or handle the error accordingly.
    return {};
    }
};