class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int maxFreq = 0;
        int left = 0, right = 0;
        int res = 0;

        while (right < s.size()){

            ++freq[s[right] - 'A'];
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            while (right - left + 1 - maxFreq > k){
                --freq[s[left] - 'A'];
                ++left;
            }

            res = max(res, right - left + 1);
            ++right;
        }

        return res;
        
    }
};