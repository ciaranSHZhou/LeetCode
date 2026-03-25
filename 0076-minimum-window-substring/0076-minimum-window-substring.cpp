class Solution {
public:
    string minWindow(string s, string t) {
        int bestLen = INT_MAX;
        int bestStart = 0;

        int left = 0;
        int right = 0;

        int missing = t.size();
        vector<int> need(128, 0);

        for (auto c : t){
            ++need[c];
        }

        while (right < s.size()){
            char r = s[right];
            if (need[r] > 0){
                --missing;
            }
            --need[r];
            ++right;

            while (missing == 0){
                int currLen = right - left;
                if (currLen < bestLen){
                    bestLen = currLen;
                    bestStart = left;
                }

                char l = s[left];
                ++need[l];
                if (need[l] > 0){
                    ++missing;
                }
                ++left;
            }
        }

        if (bestLen == INT_MAX){
            return "";
        }

        return s.substr(bestStart, bestLen);
    }
};