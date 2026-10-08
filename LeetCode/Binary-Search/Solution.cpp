1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low=0,high=nums.size()-1;
5        while(low<=high){
6            int mid=low+(high-low)/2;
7            if(nums[mid]==target) return mid;
8            else if(nums[mid]<target) low=mid+1;
9            else high=mid-1;
10        }
11        return -1;
12    }
13};