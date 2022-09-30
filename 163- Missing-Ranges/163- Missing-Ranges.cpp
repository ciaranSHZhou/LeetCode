class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> res;

        for (int i: nums){
            if (i > lower)
                res.push_back(to_string(lower) + (i - 1 > lower ? ("->" + to_string(i - 1)) : ""));
            if (i == upper)
                return res;
            lower = i + 1;
                
        }

        if (lower <= upper){
            res.push_back(to_string(lower) + (lower < upper ? ("->" + to_string(upper)) : ""));
        }
        return res;
    }
};
