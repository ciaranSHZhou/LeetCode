class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.empty())
            return "";
            
        sort(strs.begin(), strs.end());
        
        int smaller_len = min(strs[0].size(), strs.back().size());
        int res_len = 0;
        
        while (res_len < smaller_len && strs[0][res_len] == strs.back()[res_len])
            ++res_len;
        
        return strs[0].substr(0, res_len);
        
        
        
    }
};