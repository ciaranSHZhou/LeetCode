class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.empty() ? 0 : nums[0];
        
        vector<int> gain = {nums[0], max(nums[0], nums[1])};
        
        for (int i = 2; i < nums.size(); ++i){
            gain.push_back(max(gain[i - 1], gain[i - 2] + nums[i]));
        }
        
        return gain.back();
    }
};