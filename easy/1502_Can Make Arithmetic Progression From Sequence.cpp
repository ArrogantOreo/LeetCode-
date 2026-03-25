class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int len=arr.size();
        int minIndex;
        for(int i=0;i<len;i++){
            minIndex=i;
            int j;
            for(j=i+1;j<len;j++){
                if(arr[j]<arr[minIndex]){
                    minIndex=j;
                }
            }
            if(minIndex!=i){
                int temp=arr[i];
                arr[i]=arr[minIndex];
                arr[minIndex]=temp;
            }
        }
        int Delta=arr[1]-arr[0];
        for(int i=0;i<len-1;i++){
            if((arr[i+1]-arr[i])!=Delta){
                return false;
            }
        }
        return true;
    }
};