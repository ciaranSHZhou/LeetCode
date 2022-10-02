class Solution {
public:
    bool isPalindrome(string s) {
    
    int begin = 0, end = s.size() - 1;
        
    while (begin < end){
        if (!isalnum(s[begin]))
            ++begin;
        else if (!isalnum(s[end]))
            --end;
        else if (tolower(s[begin]) != tolower(s[end]))
        //else if ((s[left] + 32 - 'a') %32 != (s[right] + 32 - 'a') % 32) return false;
            return false;
        else{
            ++begin;
            --end;
        }
    }
        return true;
    }
};