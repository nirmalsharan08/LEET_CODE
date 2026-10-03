1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int res = 0;
5        int temp = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 1) {
8                temp++;
9                res=max(res,temp);
10            } 
11            else
12                temp = 0;
13        }
14        return res;
15    }
16};