#include <vector>

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int left = matrix[0][0]; // Smallest element in the matrix
        int right = matrix[n - 1][n - 1]; // Largest element in the matrix
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = countLessEqual(matrix, mid);
            
            if (count < k) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
    
private:
    int countLessEqual(const vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int count = 0;
        int row = n - 1;
        int col = 0;
        
        while (row >= 0 && col < n) {
            if (matrix[row][col] <= target) {
                count += row + 1; // Count all elements in the current column up to the current row
                col++;
            } else {
                row--;
            }
        }
        
        return count;
    }
};







/* O(N^2) Solution

 class Solution {
 public:
     int kthSmallest(vector<vector<int>>& matrix, int k) {
         priority_queue<int>pq;
         for(int i=0;i<matrix.size();i++){
             for(int j = 0; j<matrix[0].size(); j++){
                 pq.push(matrix[i][j]);
                 if(pq.size()>k)
                     pq.pop();
             }
         }
         return pq.top();
     }
 }; */