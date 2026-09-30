1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int res = nums[0], c = 1;
6        for (int i = 1; i < nums.size(); i++) {
7            int temp = nums[i];
8            if (temp == res && c == 1)
9                c--;
10            else if (temp != res && c == 0) {
11                res = temp;
12                c = 1;
13            }
14        }
15        return res;
16    }
17};