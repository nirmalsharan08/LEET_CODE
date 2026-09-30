1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int m = prices[0], prof = 0;
5        for (int i = 1; i < prices.size(); i++) {
6            int p = prices[i] - m;
7            prof = max(prof, p);
8            m = min(m, prices[i]);
9        }
10        return prof;
11    }
12};