1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int slow=0,fast=1;
5        while(fast<nums.size()){
6            if(nums[slow]!=nums[fast]) nums[++slow]=nums[fast];
7            fast++;
8        }
9        return slow+1;
10    }
11};