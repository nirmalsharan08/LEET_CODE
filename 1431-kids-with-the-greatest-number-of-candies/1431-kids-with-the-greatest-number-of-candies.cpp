class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int ele=0;
        for(int i=0;i<candies.size();i++)
            ele=max(ele,candies[i]);
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= ele) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};