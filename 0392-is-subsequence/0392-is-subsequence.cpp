class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i1=0,i2=0;
        while(i2<t.length() && i1<s.length()){
            if(t[i2]==s[i1]) i1++;
            i2++;
        }
        if(i1==s.length()) return true;
        return false;
    }
};