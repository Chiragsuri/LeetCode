class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size(); 
        int i = 0, j = n - 1;

        if (n % 2 != 0)
            ans += nums[n / 2];

        while (i < j) {
            int concatenated = nums[i] * pow(10, getDigits(nums[j])) + nums[j];
            ans += concatenated;
            i++;
            j--;
        }

        return ans;
    }

private:
    int getDigits(int num) {
        int digits = 0;
        while (num > 0) {
            num /= 10;
            digits++;
        }
        return digits;
    }
};
