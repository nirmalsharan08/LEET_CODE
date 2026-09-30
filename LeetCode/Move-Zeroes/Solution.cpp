1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int i = 0, j = 0;
5        while (j < nums.size() && i < nums.size()) {
6            while (i < nums.size() && nums[i] != 0)
7                i++;
8            while (j < nums.size() && nums[j] == 0)
9                j++;
10            if (i >= nums.size() || j >= nums.size())
11                break;
12            if (i < j)
13                swap(nums[i++], nums[j++]);
14            else
15                j = i + 1;
16        }
17    }
18};