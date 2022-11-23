class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        int row = board.size();
        int col = board[0].size();
        
        
        for (int i = 0; i < row; ++i){
            for (int j = 0; j < col; ++j){
                
                if ((i == 0 || i == row - 1 || j == 0 || j == col - 1) && board[i][j] == 'O')
                    dfs(board, i, j);
            }
        }
        
        for (int i = 0; i < row; ++i){
            for (int j = 0; j < col; ++j){
                if (board[i][j] == 'O') board[i][j] = 'X';
                if (board[i][j] == '$') board[i][j] = 'O';
            }
        }
        
        
    }
    
    void dfs(vector<vector<char>>& board, int i, int j){
        if (board[i][j] == 'O'){
            board[i][j] = '$';
            if (i > 0 && board[i-1][j] == 'O')
                dfs(board, i-1, j);
            if (i < board.size() - 1 && board[i+1][j] == 'O')
                dfs(board, i+1, j);
            if (j > 0 && board[i][j-1] == 'O')
                dfs(board, i, j-1);
            if (j < board[0].size() - 1 && board[i][j+1] == 'O')
                dfs(board, i, j+1);
            }
    }
};