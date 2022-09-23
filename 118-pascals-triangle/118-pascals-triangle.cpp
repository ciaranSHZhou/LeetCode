class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows, vector<int>());
        for (int row = 0; row < numRows; ++row){
            res[row].resize(row + 1, 1);
            for (int element = 1; element < row; ++element){
                res[row][element] = res[row-1][element] + res[row-1][element-1] ;
            }
        }
        return res;
    }
};