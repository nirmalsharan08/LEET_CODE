class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high,
               vector<int>& temp) {
        int i = low;
        int j = mid + 1;
        int k = low;
        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        while (i <= mid) {
            temp[k++] = nums[i++];
        }
        while (j <= high) {
            temp[k++] = nums[j++];
        }
        for (int p = low; p <= high; ++p) {
            nums[p] = temp[p];
        }
    }
    void mergeSort(vector<int>& nums, int low, int high, vector<int>& temp) {
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid, temp);
        mergeSort(nums, mid + 1, high, temp);
        merge(nums, low, mid, high, temp);
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size());
        mergeSort(nums, 0, nums.size() - 1, temp);
        return nums;
    }
};