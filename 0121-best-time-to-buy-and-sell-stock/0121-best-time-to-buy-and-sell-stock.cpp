class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for (int p : prices){
            if (p < buy){
                buy = p;
            }
            else if (p - buy > profit){
                profit = p - buy;
            }
        }

        return profit;
    }
};