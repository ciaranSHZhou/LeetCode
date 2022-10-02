class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int left = 0, right = s.size() - 1;
        
        while (left < right){
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            
            ++left;
            --right;
        }
    }
};