class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        vector<int> scores;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int n=scores.size();
                scores.push_back(scores[n-1]+scores[n-2]);
            }
            else if(operations[i]=="D"){
                scores.push_back(scores.back()*2);
            }
            else if(operations[i]=="C"){
                scores.pop_back();
            }
            else{
                scores.push_back(stoi(operations[i]));
            }
        }
        for(int i=0;i<scores.size();i++){
            sum+=scores[i];
        }
        
        return sum;
    }
};