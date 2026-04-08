class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int max_sum=0;
        for(int i=0;i<m;i++){
            int temp_sum=0;
            for(int j=0;j<accounts[i].size();j++){
                temp_sum+=accounts[i][j];
            }
            if(max_sum<temp_sum){
                max_sum=temp_sum;
            }
        }
        return max_sum;
    }
};