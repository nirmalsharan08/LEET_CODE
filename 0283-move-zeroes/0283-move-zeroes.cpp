class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        while (j < nums.size() && i < nums.size()) {
            while (i < nums.size() && nums[i] != 0)
                i++;
            while (j < nums.size() && nums[j] == 0)
                j++;
            if (i >= nums.size() || j >= nums.size())
                break;
            if (i < j)
                swap(nums[i++], nums[j++]);
            else
                j = i + 1;
        }
    }
};