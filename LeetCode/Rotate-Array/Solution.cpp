1class Solution {
2public:
3    void reverse(vector<int>& nums, int left, int right)
4    {
5        while(right>left)
6        {
7            swap(nums[left++],nums[right--]);
8        }
9    }
10    void rotate(vector<int>& nums, int k) {
11        int n=nums.size();
12        k%=n;
13        reverse(nums, 0,n-1);
14        reverse(nums,0,k-1);
15        reverse(nums,k,n-1);
16    }
17};