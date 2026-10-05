1class Solution {
2public:
3    void reverse(vector<int>& nums, int left, int right)
4    {
5        while(right>left)
6            swap(nums[left++],nums[right--]);
7    }
8    void rotate(vector<int>& nums, int k) {
9        int n=nums.size();
10        k%=n;
11        reverse(nums, 0,n-1);
12        reverse(nums,0,k-1);
13        reverse(nums,k,n-1);
14    }
15};