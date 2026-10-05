class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int element=0;
        int count;
        for(int i=0;i<nums.size();i++){
            if(element!=nums[i]){
                element=nums[i];
                count=1;
            }
            else count++;
            if(count==3) return false;
        }

        return true;
    }
};