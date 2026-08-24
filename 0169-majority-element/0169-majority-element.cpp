class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele, count=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                ele=nums[i];
                count++;
            }
            else if(nums[i]!=ele)
            {
                count--;
            }
            else if(nums[i]==ele) count++;
        }
        return ele;
    }
};