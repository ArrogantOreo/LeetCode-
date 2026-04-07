class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> rows(3, 0);
        vector<int> cols(3, 0);
        int diag1=0;//主对角线
        int diag2=0;//斜对角线
        for(int i=0;i<moves.size();i++){
            int r=moves[i][0];//行数
            int c=moves[i][1];//列数
            int val=0;
            if(i%2==0){
                val=1;
            }
            else{
                val=-1;
            }
            rows[r]+=val;
            cols[c]+=val;
            if(r==c){
                diag1+=val;
            }
            if(r+c==2){
                diag2+=val;
            }
            if(abs(rows[r])==3||abs(cols[c])==3||abs(diag1)==3||abs(diag2)==3){
                return (val==1)?"A":"B";
            }
        }
        return moves.size()==9?"Draw":"Pending";
    }
};