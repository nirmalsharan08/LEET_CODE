1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> set1(nums1.begin(), nums1.end());
5        sort(nums2.begin(), nums2.end());
6
7        vector<int> result;
8        for (int i = 0; i < nums2.size(); i++) {
9            // Skip consecutive identical elements in nums2
10            if (i > 0 && nums2[i] == nums2[i - 1]) continue;
11
12            if (set1.count(nums2[i])) {
13                result.push_back(nums2[i]);
14            }
15        }
16
17        return result; 
18    }
19};