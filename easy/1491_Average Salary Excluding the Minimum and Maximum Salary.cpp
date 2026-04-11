class Solution {
public:
    double average(vector<int>& salary) {
        int len=salary.size();
        int max=salary[0],min=salary[0];
        double sum=0;
        for(int i=0;i<len;i++){
            if(max<salary[i]){
                max=salary[i];
            }
            if(min>salary[i]){
                min=salary[i];
            }
            sum+=salary[i];
        }
        sum=sum-max-min;
        return double(sum/(len-2));
    }
};