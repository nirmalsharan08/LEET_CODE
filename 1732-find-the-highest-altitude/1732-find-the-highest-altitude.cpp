class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> res(n+1);
        res.push_back(0);
        for(int i=0;i<n;i++){
            res[i+1]=res[i]+gain[i];
        }   
        int ele=0;
        for(int i=1;i<=n;i++)
            ele=max(ele,res[i]);
        return ele;
    }
};