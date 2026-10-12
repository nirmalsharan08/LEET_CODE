class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg=(double)  sum/k;
        for(int i=1;i+k<=nums.size();i++){
            sum=sum-nums[i-1]+nums[i+k-1];
            double cur=(double) sum/k;
            avg=max(avg,cur);
        }
        return avg;
    }
};