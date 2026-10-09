1class Solution {
2public:
3    int maxArea(vector<int>& h) {
4        int low = 0, high = h.size() - 1, w = 0;
5        while (low < high) {
6            int min_h=min(h[low],h[high]);
7            int ma = min_h * (high - low);
8            if (ma >= w) {
9                w = ma;
10            }
11            if (h[low] <= h[high]) {
12                while (low < high && h[low] <= min_h)
13                    low++;
14            } else {
15                while (low < high && h[high] <= min_h)
16                    high--;
17            }
18        }
19        return w;
20    }
21};