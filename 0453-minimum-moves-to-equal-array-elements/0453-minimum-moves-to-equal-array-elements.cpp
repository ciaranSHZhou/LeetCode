class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0, min = INT_MAX;
        
        for (int i = 0; i < nums.size(); ++i){
            moves += nums[i];
            min = std::min(min, nums[i]);
        }
        
        return moves - min * nums.size();
    }
};