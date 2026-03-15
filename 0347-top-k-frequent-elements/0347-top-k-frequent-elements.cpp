class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int num : nums){
            ++m[num];
        }

        vector<int> res;
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto p : m){
            bucket[p.second].push_back(p.first);
        }

        for (int i = bucket.size() - 1; res.size() < k; --i){
            for (int j : bucket[i]){
                res.push_back(j);
            }
        }
        
        return res;
    }
};