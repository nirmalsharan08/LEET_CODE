class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while (i < j && !((s[i] >= '0' && s[i] <= '9') ||
                              (s[i] >= 'A' && s[i] <= 'Z') ||
                              (s[i] >= 'a' && s[i] <= 'z')))
                i++;
            while (i < j && !((s[j] >= '0' && s[j] <= '9') ||
                              (s[j] >= 'A' && s[j] <= 'Z') ||
                              (s[j] >= 'a' && s[j] <= 'z')))
                j--;
            if (i >= j)
                break;
            char c1=s[i],c2=s[j];
            if (s[i] >= 'A' && s[i] <= 'Z')
                c1+=32;
            if (s[j] >= 'A' && s[j] <= 'Z')
                c2+=32;
            if (c1!=c2)
                return false;
            i++;
            j--;
        }
        return true;
    }
};