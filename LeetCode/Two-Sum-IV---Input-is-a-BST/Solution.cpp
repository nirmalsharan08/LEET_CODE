1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int l=0,h=nums.size()-1;
5        while(l<h){
6            int m=l+(h-l)/2;
7            if(nums[m]>nums[h]) l=m+1;
8            else h=m;
9        }
10        return nums[l];
11    }
12};