class Solution {
public:
    string longestPalindrome(string s) {
         if (s.size() < 2) return s;
        int n = s.size(), maxLen = 0, start = 0;
        for (int i = 0; i < n;) {
            if (n - i <= maxLen / 2) break;
            int left = i, right = i;
            while (right < n - 1 && s[right + 1] == s[right]) ++right;
            i = right + 1;
            while (right < n  && left >= 0 && s[right] == s[left]) {
                ++right; --left;
            }
            if (maxLen < right - left - 1) {
                maxLen = right - left - 1;
                start = left+1;
            }
        }
        return s.substr(start, maxLen);
        
    }
};