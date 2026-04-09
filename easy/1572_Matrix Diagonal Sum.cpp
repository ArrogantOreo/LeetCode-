class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int len=mat.size();
        int sum=0;
        for(int i=0;i<len;i++){
            for(int j=0;j<mat[i].size();j++){
                if(i==j||(i+j+1)==len){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};