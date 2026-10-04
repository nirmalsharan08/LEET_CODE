1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4        vector<int> h =heights;
5        sort(h.begin(),h.end());
6        int res=0;
7        for(int i=0;i<h.size();i++){
8            if(h[i]!=heights[i])
9                res++;
10        }
11        return res;
12    }
13};