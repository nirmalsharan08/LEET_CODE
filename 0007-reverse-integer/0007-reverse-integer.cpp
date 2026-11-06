class Solution {
public:
    int reverse(int x) {

        int res = 0, temp = x;
        while (temp != 0) {
            int rem = temp % 10;
            if(res>INT_MAX/10) return 0;
            if(res<INT_MIN/10) return 0;
            res = (res * 10) + rem;
            temp /= 10;
        }
        return res;
    }
};