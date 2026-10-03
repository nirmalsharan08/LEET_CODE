class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m + n;
        int target=total/2;
        int p1 = 0, p2 = 0, prev=0, cur=0;
        for (int i = 0; i <= target; i++) {
            prev = cur;
            if (p1<m && (p2>=n || nums1[p1] <= nums2[p2]))
                cur = nums1[p1++];
            else
                cur = nums2[p2++];
        }
        if (total % 2 == 1)
            return cur;
        return (prev + cur) / 2.0;
    }
};