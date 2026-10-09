1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int right = 0;
5        for (int i = 1; i < nums.size(); i++) {
6            right += nums[i];
7        }
8        int left = 0;
9        if (left == right)
10            return 0;
11        for (int i = 1; i < nums.size(); i++) {
12            left += nums[i - 1];
13            right -= nums[i];
14            if (left == right)
15                return i;
16        }
17        return -1;
18    }
19};