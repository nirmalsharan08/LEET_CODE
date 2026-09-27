1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int l=0,r=nums.size()-1;
5        while(l<=r){
6            if(nums[l]==val){
7                swap(nums[l],nums[r]);
8                r--;
9            }
10            else l++;
11        }
12        return l;
13    }
14};