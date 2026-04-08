class Solution {
public:
    bool judgeCircle(string moves) {
        int x_sum=0;
        int y_sum=0;
        int len=moves.length();
        for(int i=0;i<len;i++){
            if(moves[i]=='U'){
                y_sum+=1;
            }
            else if(moves[i]=='D'){
                y_sum-=1;
            }
            else if(moves[i]=='R'){
                x_sum+=1;
            }
            else{
                x_sum-=1;
            }
        }
        if(x_sum==0&&y_sum==0){
            return true;
        }
        else{
            return false;
        }
    }
};