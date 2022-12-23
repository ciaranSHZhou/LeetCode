class Solution {
public:
    int nextGreaterElement(int n) {
        string num = to_string(n);
        int i = num.size() - 1;
        for (; i >= 1; i--){
            if (num[i] > num[i - 1])
                break;
        }
        if (i == 0) return -1;
        
        for (int j = num.size() - 1; j > i - 1; --j){
            if (num[j] > num[i - 1]){
                swap(num[j], num[i - 1]);
                break;
            }
        }
        
        sort(num.begin() + i, num.end());
        long long res = stoll(num);
        
        return res > INT_MAX ? -1 : res;
    }
};