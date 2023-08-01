class Solution {
public:
    void dfs(int row, int col, vector<vector<char>>& board, vector<vector<int>>& vis, int& ans, const int delRow[], const int delCol[]) {
        if (board[row][col] == 'X' && !vis[row][col]) {
            
            vis[row][col] = 1; // Mark the current cell as visited
        }

        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < 4; i++) {
            int newRow = row + delRow[i];
            int newCol = col + delCol[i];

            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !vis[newRow][newCol] && board[newRow][newCol] == 'X') {
                dfs(newRow, newCol, board, vis, ans, delRow, delCol);
            }
        }
    }

    int countBattleships(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int ans = 0;
        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, +1, 0, -1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && board[i][j] == 'X') {
                    ans++;
                    dfs(i, j, board, vis, ans, delRow, delCol);
                }
            }
        }

        return ans;
    }
};