class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> m;
        int res = n;
        
        while (res != 1){
            if (m[res] == 2)
                return false;
            int temp = 0;
            int ones = res % 10;
            int tens = (res - ones)/ 10;
            
            while (res / 10){
                temp += (res % 10) * (res % 10);
                res /= 10;
            }
            temp += res * res;
            
            res = temp;
            ++m[res];

                
        }
        
        return true;
    }
};