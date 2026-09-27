1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int i=0,j=numbers.size()-1;
5        while(i<j){
6            if((numbers[i]+numbers[j])>target) j--;
7            else if((numbers[i]+numbers[j])<target) i++;
8            else return {i+1,j+1};
9        }
10        return {};
11    }
12};