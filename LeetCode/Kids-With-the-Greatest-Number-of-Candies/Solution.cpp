1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        vector<bool> res;
5        int ele=0;
6        for(int i=0;i<candies.size();i++)
7            ele=max(ele,candies[i]);
8        for(int i=0;i<candies.size();i++){
9            if(candies[i]+extraCandies >= ele) res.push_back(true);
10            else res.push_back(false);
11        }
12        return res;
13    }
14};