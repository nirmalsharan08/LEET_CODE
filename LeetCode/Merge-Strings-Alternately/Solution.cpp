1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        int m = word1.size();
5        int n = word2.size();
6        string result = "";
7        int i = 0, j = 0;
8
9        while (i < m || j < n) {
10            if (i < m) {
11                result.push_back(word1[i++]);
12            }
13            if (j < n) {
14                result.push_back(word2[j++]);
15            }
16        }
17
18        return result;
19    }
20};