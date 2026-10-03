1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        for (int i = 0; i < nums.size(); i++) {
5            if (nums[i] != nums[0])
6                return 1;
7        }
8        return 0;
9    }
10};