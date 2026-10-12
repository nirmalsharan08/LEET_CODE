1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        int t = m + n - 2;
5        int k = min(m - 1, n - 1);
6        long long res = 1;
7        for (int i = 1; i <= k; i++) {
8            res = res * (t - k + i) / i;
9        }
10        return res;
11    }
12};