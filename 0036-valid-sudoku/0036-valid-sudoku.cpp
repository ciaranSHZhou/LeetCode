class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int ROW = board.size();
        int COL = board[0].size();
        
        unordered_map<char, int> row[ROW];
        unordered_map<char, int> col[COL];
        unordered_map<char, int> box[ROW];
        
        for (int i = 0; i < ROW; ++i){
            for (int j = 0; j < COL; ++j){
                char ch = board[i][j];
            
                if (ch != '.' && (row[i][ch]++ >0 || col[j][ch]++ > 0 ||
                                 box[i / 3 * 3 + j / 3][ch]++ > 0)){
                    return false;
                }
            }
        }
        
        return true;
    }
};