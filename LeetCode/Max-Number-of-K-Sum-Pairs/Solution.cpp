1class Solution {
2public:
3    int maxOperations(vector<int>& nums, int k) {
4        sort(nums.begin(), nums.end());
5        int l = 0, r = nums.size() - 1;
6        int ope = 0;
7        while (l < r) {
8            int cur = nums[r] + nums[l];
9            if (cur == k) {
10                ope++;
11                l++;
12                r--;
13            } else if (cur < k)
14                l++;
15            else
16                r--;
17        }
18        return ope;
19    }
20};