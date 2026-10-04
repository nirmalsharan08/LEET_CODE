class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int temp[1001]={0};
        for(int i=0;i<arr1.size();i++){
            temp[arr1[i]]++;
        }
        vector<int> res;
        for(int i=0;i<arr2.size();i++){
            while(temp[arr2[i]]>0){
                res.push_back(arr2[i]);
                temp[arr2[i]]--;
            }
        }
        for(int i=0;i<1001;i++){
            while(temp[i]>0){
                res.push_back(i);
                temp[i]--;
            }
        }
        return res;
    }
};