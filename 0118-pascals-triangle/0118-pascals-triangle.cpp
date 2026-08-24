class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> r = {{1}, {1, 1}};
        if (n == 1)
            return {{1}};
        vector<int> prev={1,1};
        for (int i = 2; i < n; i++) {
            vector<int> temp1 = {1};
            for (int j = 1; j < i; j++) {
                temp1.push_back(prev[j - 1] + prev[j]);
            }
            temp1.push_back(1);
            prev = temp1;
            r.push_back(temp1);
        }
        return r;
    }
};