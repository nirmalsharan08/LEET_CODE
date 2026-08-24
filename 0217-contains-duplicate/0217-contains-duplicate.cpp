class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int x: nums)
        {
            bool a =  st.insert(x).second;
            if(a==0)
                return true;
        }
        return false;
    }
};