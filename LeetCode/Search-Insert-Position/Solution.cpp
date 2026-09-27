1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int l=0,r=nums.size()-1;
5        while(l<=r){
6            int m=l+(r-l)/2;
7            if(nums[m] > target) r=m-1;
8            else if(nums[m]==target) return m;
9            else l=m+1;
10        }
11        return l;
12    }
13};