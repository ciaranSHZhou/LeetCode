class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty()|| board[0].empty()) return false;
        int ROW = board.size();
        int COL = board[0].size();
        vector<vector<bool>> visited(ROW, vector<bool>(COL));
        
        for (int i = 0; i < ROW; ++ i){
            for (int j = 0; j < COL; ++j){
                if (dfs(board, word, 0, i, j, visited)) return true;
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, string word, int word_index, int i, int j, vector<vector<bool>>& visited){
        if (word_index == word.size()) return true;
        int ROW = board.size();
        int COL = board[0].size();
        
        if (i < 0 || i > ROW - 1 || j < 0 || j > COL - 1 || visited[i][j] || board[i][j] != word[word_index]) return false;
        visited[i][j] = true;
        bool res = dfs(board, word, word_index + 1, i + 1, j, visited) ||
                   dfs(board, word, word_index + 1, i - 1, j, visited) ||
                    dfs(board, word, word_index + 1, i, j + 1, visited) ||
                    dfs(board, word, word_index + 1, i, j - 1, visited);
        visited[i][j] = false;
        return res;
    }
};