1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int n=gain.size();
5        vector<int> res(n+1);
6        res.push_back(0);
7        for(int i=0;i<n;i++){
8            res[i+1]=res[i]+gain[i];
9        }   
10        int ele=0;
11        for(int i=1;i<=n;i++)
12            ele=max(ele,res[i]);
13        return ele;
14    }
15};