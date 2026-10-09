class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unordered_set<int> m;
        int ele = arr[0], count = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (ele == arr[i])
                count++;
            else {
                if (m.count(count))
                    return false;
                m.insert(count);
                ele = arr[i];
                count = 1;
            }
        }
        if(m.count(count)) return false;
        return true;
    }
};