1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int count=0;
5        int i=s.length()-1;
6        while (i >= 0 && s[i] == ' ') {
7            i--;
8        }
9        while (i >= 0 && s[i] != ' ') {
10            count++;
11            i--;
12        }
13        return count;
14    }
15};