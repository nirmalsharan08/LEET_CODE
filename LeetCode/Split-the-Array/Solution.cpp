1class Solution {
2public:
3    bool isPossibleToSplit(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int element=0;
6        int count;
7        for(int i=0;i<nums.size();i++){
8            if(element!=nums[i]){
9                element=nums[i];
10                count=1;
11            }
12            else count++;
13            if(count==3) return false;
14        }
15
16        return true;
17    }
18};