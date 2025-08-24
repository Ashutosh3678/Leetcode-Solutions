class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int result = 0;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0 && !visited[i][j]) {
                    long long sum = dfs(grid, visited, i, j, m, n);
                    if (sum % k == 0) {
                        result++;
                    }
                }
            }
        }
        
        return result;
    }
    
private:
    long long dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int m, int n) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0 || visited[i][j]) {
            return 0;
        }
        
        visited[i][j] = true;
        long long sum = grid[i][j];
        
        sum += dfs(grid, visited, i - 1, j, m, n);
        sum += dfs(grid, visited, i + 1, j, m, n);
        sum += dfs(grid, visited, i, j - 1, m, n);
        sum += dfs(grid, visited, i, j + 1, m, n);
        
        return sum;
    }
};