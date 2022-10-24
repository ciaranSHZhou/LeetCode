class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int row = grid.size();
        int col = grid[0].size();
        int res = 0;
        vector<vector<bool>> visited(row, vector<bool>(col));
        
        for (int i = 0; i < row; ++i){
            for (int j = 0; j < col; ++j){
                if (visited[i][j] || grid[i][j] == '0') continue;
                
                dfs(grid, visited, i, j);
                ++res;
            }
        }
        return res;
    }
    
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int row, int col){
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || visited[row][col] || grid[row][col] == '0')
            return;
        visited[row][col] = true;
        dfs(grid, visited, row - 1, col);
        dfs(grid, visited, row + 1, col);
        dfs(grid, visited, row, col - 1);
        dfs(grid, visited, row, col + 1);
    }
};