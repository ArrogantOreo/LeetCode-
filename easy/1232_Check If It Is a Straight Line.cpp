class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int len=coordinates.size();
        if(len==2){
            return true;
        }
        int x0=coordinates[0][0],x1=coordinates[1][0];
        int y0=coordinates[0][1],y1=coordinates[1][1];
        int delta_x=x1-x0;
        int delta_y=y1-y0;
        for(int i=2;i<len;i++){
            int xi=coordinates[i][0];
            int yi=coordinates[i][1];
            if(delta_x*(yi-y0)!=delta_y*(xi-x0)){
                return false;
            }
        }
        return true;
    }
};