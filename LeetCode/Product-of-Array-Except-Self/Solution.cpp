1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> left(n, 1);
6        vector<int> right(n, 1);
7        for (int i = 1; i < n; i++)
8            left[i] = left[i - 1] * nums[i - 1];
9        for (int i = n - 2; i >= 0; i--)
10            right[i] = right[i + 1] * nums[i + 1];
11        for (int i = 0; i < n; i++)
12            nums[i] = left[i] * right[i];
13        return nums;
14    }
15};