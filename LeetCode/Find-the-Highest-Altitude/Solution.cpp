1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int prefix = 0;
5        int ans = 0;
6        for (int i = 0; i < gain.size(); i++) {
7            prefix += gain[i];
8            ans = max(ans, prefix);
9        }
10        return ans;
11    }
12};