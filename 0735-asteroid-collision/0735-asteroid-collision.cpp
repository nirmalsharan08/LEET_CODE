class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for (int a : asteroids) {
            bool destroyed = false;
            while (!res.empty() && res.back() > 0 && a < 0) {
                if (res.back() < -a) {
                    res.pop_back();
                } else if (res.back() == -a) {
                    res.pop_back();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed)
                res.push_back(a);
        }
        return res;
    }
};