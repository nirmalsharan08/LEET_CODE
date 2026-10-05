class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res(n);
        res[0]=1;
//now gett three pointer to generate the next ugly number
        int p2=0,p3=0,p5=0;
        for(int i=1;i<n;i++){
//i am making three vars to multiply the prev resultit with 2,3,5 and check which one is the minimum
            int next2=res[p2]*2;
            int next3=res[p3]*3;
            int next5=res[p5]*5;
            int result=min({next2,next3,next5});
            res[i]=result;
            if(result==next2) p2++;
            if(result==next3) p3++;
            if(result==next5) p5++;
        }
        return res[n-1];
    }
};