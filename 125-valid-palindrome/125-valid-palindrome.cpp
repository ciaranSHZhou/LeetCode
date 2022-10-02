class Solution {
public:
    bool isPalindrome(string s) {
        string char_only = "";
            
        for (char c : s){
            if (isalnum(c)){
                char_only.push_back(tolower(c));
            }
        }
        
        
        for (int i = 0, j = char_only.size() - 1; i < char_only.size() / 2; ++i, --j){
            
            if (char_only[i] != char_only[j])
                return false;
        }
        return true;
    }
};