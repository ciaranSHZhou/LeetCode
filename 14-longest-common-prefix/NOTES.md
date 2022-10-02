Solution1: Sort and Compare

Time Complexity: O(m * n log n), m= average length of each element, n = number of elements
Space Complexity: O(1)

Solution 2:Scanning
```
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.empty())
            return "";
        
        for (int j = 0; j < strs[0].size(); ++j){
            for (int i = 1; i < strs.size(); ++i){
                if (j >= strs[i].size() || strs[i][j] != strs[0][j])
                    return strs[i].substr(0, j);
            }
        }
        
        return strs[0];
    }
};
```


Time Complexity: O(s), s= number of chars in strs
Space Complexity: O(1)
