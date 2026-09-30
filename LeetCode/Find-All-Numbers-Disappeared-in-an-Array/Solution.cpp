1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        for (int i = 0; i < nums.size(); i++)
5            nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
6        vector<int> res;
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] > 0)
9                res.push_back(i + 1);
10        }
11        return res;
12    }
13};