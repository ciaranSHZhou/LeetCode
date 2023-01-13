class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN, sum = 0;
        
        for (auto num : nums){
            sum = max(sum + num, num);
            res = max(sum, res);
        }
        
        return res;
        
    }
};