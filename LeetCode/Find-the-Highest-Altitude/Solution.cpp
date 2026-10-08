1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int prev = 0;
5        int ans = 0;
6        for (int i = 0; i < gain.size(); i++) {
7            prev += gain[i];
8            ans = max(ans, prev);
9        }
10        return ans;
11    }
12};