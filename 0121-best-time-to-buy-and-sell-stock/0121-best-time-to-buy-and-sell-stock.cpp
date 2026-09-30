class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = prices[0], prof = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < m)
                m = prices[i];
            else {
                prof = max(prof, prices[i] - m);
            }
        }
        return prof;
    }
};