1class Solution {
2public:
3    bool isAnagram(string& s, string&t) {
4        if(s.length()!=t.length()) return false;
5        sort(s.begin(),s.end());
6        sort(t.begin(),t.end());
7        return s==t;
8    }
9};