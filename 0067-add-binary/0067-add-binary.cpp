class Solution {
public:
    string addBinary(string a, string b) {
        
        string res = "";
        int m = a.size() - 1, n = b.size() - 1, carry = 0;
        
        while (m >= 0 || n >= 0){
            int o = m >= 0 ? a[m--] - '0' : 0;
            int p = n >= 0 ? b[n--] - '0' : 0;
            
            int sum = o + p + carry;
            res = to_string(sum % 2) + res;
            carry = sum / 2;
        }
        
        return carry == 1 ? "1" + res : res;
    }
};