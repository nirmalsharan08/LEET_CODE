1/**
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13
14        int low = 1, high = n, c;
15        int mid;
16        while(low<=high){
17            mid=low+(high-low)/2;
18            c=guess(mid);
19            if(c==1) low=mid+1;
20            else if(c==-1) high=mid-1;
21            else return mid;
22        }
23        return mid;
24    }
25};