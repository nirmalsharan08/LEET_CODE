class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int t1=0;t1<n;t1++){
            int right=0,left=n-1;
            while(left>right){
                swap(matrix[t1][right],matrix[t1][left]);
                right++;left--;
            }
        }
    }
};