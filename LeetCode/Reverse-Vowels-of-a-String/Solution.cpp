1class Solution {
2public:
3    string reverseVowels(string s) {
4        int l = 0;
5        int r = s.size() - 1;
6        while (l < r) {
7            while (l < r &&
8                   !(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' ||
9                     s[l] == 'u' || s[l] == 'A' || s[l] == 'E' || s[l] == 'I' ||
10                     s[l] == 'O' || s[l] == 'U')) {
11                l++;
12            }
13            while (l < r &&
14                   !(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' ||
15                     s[r] == 'u' || s[r] == 'A' || s[r] == 'E' || s[r] == 'I' ||
16                     s[r] == 'O' || s[r] == 'U')) {
17                r--;
18            }
19            swap(s[l++], s[r--]);
20        }
21        return s;
22    }
23};