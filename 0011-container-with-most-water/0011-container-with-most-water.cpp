class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maxArea = 0;
        while (i < j) {
            int minHeight = min(height[i], height[j]);
            int currentArea = (j - i) * minHeight;
            maxArea = max(maxArea, currentArea);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
};