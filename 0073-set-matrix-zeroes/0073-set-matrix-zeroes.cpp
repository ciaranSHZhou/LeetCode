class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty()) return;
        int ROWS = matrix.size(), COLS = matrix[0].size();
        bool col_zero = false, row_zero = false;
        
        for (int i = 0; i < COLS; ++i){
            if (matrix[0][i] == 0)
                row_zero = true;
        }
        
        for (int i = 0; i < ROWS; ++i){
            if (matrix[i][0] == 0)
                col_zero = true;
        }
        
        for (int i = 1; i < ROWS; ++i){
            for (int j = 1; j < COLS; ++j){
                if (matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for (int i = 1; i < ROWS; ++i){
            for (int j = 1; j < COLS; ++j){
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        if (row_zero){
            for (int i = 0; i < COLS; ++i)
                matrix[0][i] = 0;
        }
        
        if (col_zero){
            for (int i = 0; i < ROWS; ++i)
                matrix[i][0] = 0;
        }
        
    }
};