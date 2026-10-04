1class Solution {
2public:
3    int addDigits(int num) {
4        while (num >= 10) {
5            int res = 0;
6            while (num > 0) {
7                res += num % 10;
8                num /= 10;
9            }
10            num = res;
11        }
12        return num;
13    }
14};