1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        double avg=0;
5        int sum=0;
6        for(int i=0;i<k;i++){
7            sum+=nums[i];
8        }
9        avg=(double)  sum/k;
10        for(int i=1;i+k<=nums.size();i++){
11            sum=sum-nums[i-1]+nums[i+k-1];
12            double cur=(double) sum/k;
13            avg=max(avg,cur);
14        }
15        return avg;
16    }
17};