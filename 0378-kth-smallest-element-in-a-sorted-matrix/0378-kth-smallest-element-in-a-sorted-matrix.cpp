class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int left = matrix[0][0], right = matrix.back().back();
        while (left < right){
            int mid = left + (right - left) / 2;
            int cnt = CountLessEqual(matrix, mid);
            if (cnt < k) left = mid + 1;
            else right = mid;
        }
        return left;
    }
    
    int CountLessEqual(vector<vector<int>>& matrix, int target){
        int n = matrix.size();
        int i = n - 1, j = 0, res = 0;
        
        while (i >= 0 && j < n){
            if (matrix[i][j] <= target){
                //If so, all the numbers to the left & current number is less than target
                res += i + 1;
                ++j;
            }
            else{
                --i;
            }
        }
        return res;
    }
};