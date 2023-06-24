class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;
        int maxPowerOfThree = pow(3, (int)(log10(INT_MAX) / log10(3))); // Maximum power of three that fits in an integer
        return maxPowerOfThree % n == 0;
    }
};
