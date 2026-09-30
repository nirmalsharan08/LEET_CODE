1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int m = prices[0], prof = 0;
5        for (int i = 0; i < prices.size(); i++) {
6            if (prices[i] < m)
7                m = prices[i];
8            else {
9                prof = max(prof, prices[i] - m);
10            }
11        }
12        return prof;
13    }
14};