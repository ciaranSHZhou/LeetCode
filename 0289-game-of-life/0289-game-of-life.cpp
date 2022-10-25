class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int navigate_neighbors[3] = {0, 1, -1};
        int ROW = board.size();
        int COL = board[0].size();
        
        for (int row = 0; row < ROW; ++row){
            for (int col = 0; col <COL; ++col){
                int live_neighbors = 0;
                
                for (int i = 0; i < 3; ++i){
                    for (int j = 0; j < 3; ++j){
                        if (!(navigate_neighbors[i] == 0 && navigate_neighbors[j] == 0)){
                            int neighbor_row = row + navigate_neighbors[i];
                            int neighbor_col = col + navigate_neighbors[j];
                        
                        
                            if (neighbor_row >= 0 && neighbor_row < ROW && neighbor_col >=0 && neighbor_col < COL && abs(board[neighbor_row][neighbor_col]) == 1){
                                ++live_neighbors;
                            }  
                
						}
                    }
                }

                //Rule 1 & 3
                if (board[row][col] == 1 && (live_neighbors > 3 || live_neighbors < 2)){
                    board[row][col] = -1;
				}
				
				//Rule 4
                if (board[row][col] == 0 && (live_neighbors == 3)){
                    board[row][col] = 2;
                }
                        
                
				}
            }
        
        for (int row = 0; row < ROW; ++row){
            for (int col = 0; col <COL; ++col){
                if (board[row][col] > 0)
                    board[row][col] = 1;
                else
                    board[row][col] = 0;
            }
        }
    }

};