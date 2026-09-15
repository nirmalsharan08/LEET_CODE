/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        int low = 1, high = n, c;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            c=guess(mid);
            if(c==1) low=mid+1;
            else if(c==-1) high=mid-1;
            else return mid;
        }
        return mid;
    }
};