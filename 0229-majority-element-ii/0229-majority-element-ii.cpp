class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 1;
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && nums[i] == nums[i + 1])
                count++;
            else {
                if (count > n / 3)
                    res.push_back(nums[i]);
                count = 1;
            }
        }
        return res;
    }
};