class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int score = nums[0];
        deque<pair<int, int>> dp;
        dp.push_back({0, score});
        for (int i = 1; i < nums.size(); ++i){
            
            while (!dp.empty() && dp.front().first < i - k){
                dp.pop_front();
            }
            score = dp.front().second + nums[i];
            
            while (!dp.empty() && dp.back().second < score){
                dp.pop_back();
            }
            
            dp.push_back({i, score});
        }
        
        return score;
    }
};