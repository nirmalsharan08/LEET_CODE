1/*
2class Solution {
3public:
4    int singleNumber(vector<int>& nums) {
5        int res=0;
6        for(auto n : nums){
7            res^=n;
8        }
9        return res;
10    }
11};
12*/
13class Solution {
14public:
15    int singleNumber(vector<int>& nums) {
16        sort(nums.begin(), nums.end());
17        int res = nums[0], c = 1;
18        for (int i = 1; i < nums.size(); i++) {
19            int temp = nums[i];
20            if (temp == res && c == 1)
21                c--;
22            else if (temp != res && c == 0) {
23                res = temp;
24                c = 1;
25            }
26        }
27        return res;
28    }
29};