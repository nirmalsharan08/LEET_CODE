class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums(nums1.begin(), nums1.begin() + m);
        int i1 = 0, i2 = 0, i = 0;
        while (i1 < m && i2 < n) {
            if (nums[i1] <= nums2[i2]) {
                nums1[i] = nums[i1];
                i++;
                i1++;
            } else {
                nums1[i] = nums2[i2];
                i++;
                i2++;
            }
        }
        while (i1 < m) {
            nums1[i] = nums[i1];
            i++;
            i1++;
        }
        while (i2 < n) {
            nums1[i] = nums2[i2];
            i++;
            i2++;
        }
    }
};