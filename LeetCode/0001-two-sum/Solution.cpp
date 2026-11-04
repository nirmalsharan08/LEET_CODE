class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            auto n2 = mp.find(target - nums[i]);
            if (n2 != mp.end())
                return {i, n2->second};
            mp.insert({nums[i], i});
        }
        return {};
    }
};