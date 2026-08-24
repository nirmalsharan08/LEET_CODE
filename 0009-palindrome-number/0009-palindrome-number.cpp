class Solution {
public:
    bool isPalindrome(int x) {
        long long res=0, temp=x;
        while(temp>0)
        {
            int rem=temp%10;
            res=(res*10)+rem;
            temp /=10;
        }
        return res==x;
    }
};