1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int m = nums1.size();
5        int n = nums2.size();
6        int total = m + n;
7        int target=total/2;
8        int p1 = 0, p2 = 0, prev=0, cur=0;
9        for (int i = 0; i <= target; i++) {
10            prev = cur;
11            if (p1<m && (p2>=n || nums1[p1] <= nums2[p2]))
12                cur = nums1[p1++];
13            else
14                cur = nums2[p2++];
15        }
16        if (total % 2 == 1)
17            return cur;
18        return (prev + cur) / 2.0;
19    }
20};