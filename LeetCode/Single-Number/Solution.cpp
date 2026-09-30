1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int res=0;
5        for(auto n : nums){
6            res^=n;
7        }
8        return res;
9    }
10};