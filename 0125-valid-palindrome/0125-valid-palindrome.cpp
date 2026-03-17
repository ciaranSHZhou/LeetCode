class Solution {
public:
    bool isPalindrome(string s) {
       int first = 0, last = s.size() - 1;

       while (first <= last){
        char currFirst = s[first];
        char currLast = s[last];

        if (!isalnum(currFirst)){
            ++first;
        }
        else if (!isalnum(currLast)){
            --last;
        }
        else if (tolower(currFirst) != tolower(currLast)){
            return false;
        }
        else {
            ++first;
            --last;
        }


       }

       return true;

    }
};