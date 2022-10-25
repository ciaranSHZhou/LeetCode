class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        int ROW = matrix.size();
        int COL = matrix[0].size();
        int top = 0;
        int right = COL - 1;
        int bot = ROW - 1;
        int left = 0;
        
        while (res.size() < ROW * COL){
            
            for (int col = left; col <= right; ++ col){
                res.push_back(matrix[top][col]);
            }
            
            for (int row = top + 1; row <= bot; ++row){
                res.push_back(matrix[row][right]);
            }
            
            if (top != bot){
                for (int col = right - 1; col >= left; --col){
                    res.push_back(matrix[bot][col]);
                }
            }
            
            if (left != right){
                for (int row = bot - 1; row >= top + 1; --row){
                    res.push_back(matrix[row][left]);
                }
            }
            
            ++left;
            --right;
            ++top;
            --bot;

        }
        
        return res;
    }
};