1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        vector<int> res;
5        int n = nums.size();
6        sort(nums.begin(), nums.end());
7        int count = 1;
8        for (int i = 0; i < n; i++) {
9            if (i + 1 < n && nums[i] == nums[i + 1])
10                count++;
11            else {
12                if (count > n / 3)
13                    res.push_back(nums[i]);
14                count = 1;
15            }
16        }
17        return res;
18    }
19};