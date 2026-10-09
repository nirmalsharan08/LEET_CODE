class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        int ope = 0;
        while (l < r) {
            int cur = nums[r] + nums[l];
            if (cur == k) {
                ope++;
                l++;
                r--;
            } else if (cur < k)
                l++;
            else
                r--;
        }
        return ope;
    }
};