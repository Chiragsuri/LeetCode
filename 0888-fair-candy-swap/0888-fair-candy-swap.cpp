class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    int aliceTotal = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
    int bobTotal = accumulate(bobSizes.begin(), bobSizes.end(), 0);
    int targetDiff = (bobTotal - aliceTotal) / 2;

    sort(bobSizes.begin(), bobSizes.end());

    for (int aliceCandy : aliceSizes) {
        int targetBobCandy = aliceCandy + targetDiff;
        auto it = lower_bound(bobSizes.begin(), bobSizes.end(), targetBobCandy);
        if (it != bobSizes.end() && *it == targetBobCandy) {
            return { aliceCandy, targetBobCandy };
        }
    }

    // If no valid pair is found, return an empty vector or handle the error accordingly.
    return {};
    }
};