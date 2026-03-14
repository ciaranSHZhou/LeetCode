class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> ans;

        for (string s : strs){
            vector<int> letters(36,0);

            for (char c : s)
                ++letters[c - 'a'];

            string key = "";
            for (int i = 0; i < 26; ++i){
                key += '#';
                key += to_string(letters[i]);
            }
            ans[key].push_back(s);
        }

        vector<vector<string>> results;

            for (auto itr = ans.begin(); itr != ans.end(); ++itr){
                results.push_back(itr->second);
            }
            return results;
    }
};