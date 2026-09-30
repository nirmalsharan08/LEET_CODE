/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto n : nums){
            res^=n;
        }
        return res;
    }
};
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = nums[0], c = 1;
        for (int i = 1; i < nums.size(); i++) {
            int temp = nums[i];
            if (temp == res && c == 1)
                c--;
            else if (temp != res && c == 0) {
                res = temp;
                c = 1;
            }
        }
        return res;
    }
};