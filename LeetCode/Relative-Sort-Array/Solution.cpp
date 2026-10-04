1class Solution {
2public:
3    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
4        int temp[1001]={0};
5        for(int i=0;i<arr1.size();i++){
6            temp[arr1[i]]++;
7        }
8        vector<int> res;
9        for(int i=0;i<arr2.size();i++){
10            while(temp[arr2[i]]>0){
11                res.push_back(arr2[i]);
12                temp[arr2[i]]--;
13            }
14        }
15        for(int i=0;i<1001;i++){
16            while(temp[i]>0){
17                res.push_back(i);
18                temp[i]--;
19            }
20        }
21        return res;
22    }
23};