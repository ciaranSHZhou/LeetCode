class TicTacToe {
public:
    vector<int> rows;
    vector<int> cols;
    int diagonal; 
    int anti_diagonal;
    
    TicTacToe(int n): rows(n), cols(n), diagonal(0), anti_diagonal(0){}
    
    int move(int row, int col, int player) {
        int current_player = (player == 1) ? 1: -1;
        rows[row] += current_player;
        cols[col] += current_player;
        
        if (row == col){
            diagonal += current_player;
        }
        
        if (col == (rows.size() - row - 1)){
            anti_diagonal += current_player;
        }
        
        if (abs(rows[row]) == rows.size() ||
            abs(cols[col]) == rows.size() ||
            abs(diagonal) == rows.size() ||
            abs(anti_diagonal) == rows.size()){
            return player;
        }
        else
            return 0;
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */