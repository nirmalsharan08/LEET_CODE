class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /*
        if the all the digits are not 9 add 1 to the last element.
        if all the digits are 9 append one 0 at the last.
        if one element is 9 make it 0 and plus one onto its previous digit.
        */
        int n=digits.size();
        int i=n-1;
        while(i>=0 && digits[i]==9)
        {
            i--;

        }
        if(i==-1)
        {
            digits[0]=1;
            for(int j=1;j<n;j++)
            {
                digits[j]=0;
            }
                digits.push_back(0);
        }
        else
        {
            digits[i]++;
            for(int j=i+1;j<n;j++)
            {
                digits[j]=0;
            }
        }
        return digits;
    }
};