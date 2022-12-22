class Solution {
public:
    unordered_map<int, int> m;
    int dp(int i){
        
    
        if (i <= 2)
            return i; 
        if (!m.count(i)){
            m[i] = dp(i - 1) + dp(i - 2);
        }
        return m[i];
    }
    
    int climbStairs(int n) {
        return dp(n);
    }
};