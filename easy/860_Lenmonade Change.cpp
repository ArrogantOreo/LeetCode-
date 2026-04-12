class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int len=bills.size();
        int five_count=0;
        int ten_count=0;
        for(int i=0;i<len;i++){
            if(bills[i]==5){
                five_count++;
            }
            else if(bills[i]==10 && five_count>=1){
                five_count--;
                ten_count++;
            }
            else if(bills[i]==20){
                if(five_count>=1&&ten_count>=1){
                    five_count--;
                    ten_count--;
                }
                else if(five_count>=3){
                    five_count=five_count-3;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};