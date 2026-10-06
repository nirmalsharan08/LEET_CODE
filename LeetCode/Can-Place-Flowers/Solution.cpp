1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        if (n == 0)
5            return true;
6        int count = 0;
7        for (int i = 0; i < flowerbed.size(); i++) {
8            if (flowerbed[i] == 0) {
9                bool r = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
10                bool l = (i == 0 || flowerbed[i - 1] == 0);
11                if (r && l) {
12                    flowerbed[i] = 1;
13                    count++;
14                    if (count >= n)
15                        return true;
16                }
17            }
18        }
19        return count >= n;
20    }
21};