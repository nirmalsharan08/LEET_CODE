class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.length(), s2 = word2.length();
        if (s1 == 0)
            return word2;
        if (s2 == 0)
            return word1;
        if (s1 == 0 && s2 == 0)
            return "";
        int i1 = 0, i2 = 0, it = 1;
        string res;
        res.push_back(word1[i1++]);
        while (i1 < s1 && i2 < s2) {
            if (it % 2 == 0)
                res.push_back(word1[i1++]);
            else
                res.push_back(word2[i2++]);
            it++;
        }
        while (i1 < s1)
            res.push_back(word1[i1++]);
        while (i2 < s2)
            res.push_back(word2[i2++]);
        return res;
    }
};