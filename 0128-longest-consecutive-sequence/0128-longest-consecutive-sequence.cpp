class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int res = 0;

        for (int num : nums){
            if (!s.count(num)){
                continue;
            }

            s.erase(num);
            int prev = num - 1;
            int next = num + 1;

            while (s.count(prev)){
                s.erase(prev--);
            }

            while (s.count(next)){
                s.erase(next++);
            }

            res = max(res, next - prev - 1);

        }

        return res;
        
    }
};