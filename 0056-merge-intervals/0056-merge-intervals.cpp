class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return {};

        sort(intervals.begin(), intervals.end());
        int n = intervals.size();

        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for (int i = 1; i < n; i++) {

            vector<int>& last = res.back();
            vector<int>& cur = intervals[i];
            if (cur[0] <= last[1])
                last[1] = max(last[1], cur[1]);
            else
                res.push_back(intervals[i]);
        }
        
        return res;
    }
};