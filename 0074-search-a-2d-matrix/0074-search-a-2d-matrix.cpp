class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        if (target < matrix[0][0])
            return false;
        int t = 0, b = m - 1;
        int row;
        while (t <= b) {
            int mid = t + (b - t) / 2;
            if (matrix[mid][0] <= target) {
                row = mid;
                t = mid + 1;
            } else
                b = mid - 1;
        }
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (matrix[row][mid] == target)
                return true;
            if (matrix[row][mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return false;
    }
};