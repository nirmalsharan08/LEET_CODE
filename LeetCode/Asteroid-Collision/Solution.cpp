1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4        vector<int> res;
5        for (int a : asteroids) {
6            bool destroyed = false;
7            while (!res.empty() && res.back() > 0 && a < 0) {
8                if (res.back() < -a) {
9                    res.pop_back();
10                } else if (res.back() == -a) {
11                    res.pop_back();
12                    destroyed = true;
13                    break;
14                } else {
15                    destroyed = true;
16                    break;
17                }
18            }
19            if (!destroyed)
20                res.push_back(a);
21        }
22        return res;
23    }
24};