1/* 
2class Solution {
3public:
4    int addDigits(int num) {
5        while (num >= 10) {
6            int res = 0;
7            while (num > 0) {
8                res += num % 10;
9                num /= 10;
10            }
11            num = res;
12        }
13        return num;
14    }
15};
16*/
17class Solution {
18public:
19    int addDigits(int num) {
20        if (num == 0) return 0;
21        return (num % 9 == 0) ? 9 : (num % 9);
22    }
23};