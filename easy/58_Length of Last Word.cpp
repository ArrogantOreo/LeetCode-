class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length();
        string s_temp;
        int count=0;
        for(int i=len-1;i>=0;i--){
            s_temp+=s[i];
        }
        int space=0;
        int s_reverse_len=0;
        string s_reverse;
        for(int i=0;i<len;i++){
            if(s_temp[i]==' '){
                space=1;
            }
            else{
                space=0;
            }
            if(space==0&&s_temp[i]!=' '){
                s_reverse+=s_temp[i];
                s_reverse_len++;
            }
            if(space==1 && !s_reverse.empty()){
                return s_reverse_len;
            }
        }
        return s_reverse_len; 
    }
};