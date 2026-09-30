1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6        stack<int> s;
7        s.push(nums[n - 1]);
8        for (int i = n - 2; i >= 0; i--) {
9            if (nums[i] != s.top()) {
10                s.push(nums[i]);
11            }
12            if (s.size() == 3) {
13                break;
14            }
15        }
16        return s.size() == 3 ? s.top() : nums[n - 1];
17    }
18};