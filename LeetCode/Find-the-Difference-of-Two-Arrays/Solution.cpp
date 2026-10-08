1class Solution {
2public:
3    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> s1(nums1.begin(), nums1.end());
5        unordered_set<int> s2(nums2.begin(), nums2.end());
6        vector<int> a, b;
7        for (auto n : s1) {
8            if (s2.find(n) == s2.end())
9                a.push_back(n);
10        }
11        for (auto n : s2) {
12            if (s1.find(n) == s1.end())
13                b.push_back(n);
14        }
15        return {a, b};
16    }
17};