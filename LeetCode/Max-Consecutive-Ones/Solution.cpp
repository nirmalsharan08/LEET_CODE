1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int res = 0;
5        int temp = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 1) {
8                temp++;
9                if (temp > res)
10                    res = temp;
11            } 
12            else
13                temp = 0;
14        }
15        return res;
16    }
17};