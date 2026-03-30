class Solution {
public:
    string toLowerCase(string s) {
        string new_s="";
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                new_s+=s[i]+32;
            }
            else{
                new_s+=s[i];
            }
        }
        return new_s;
    }
};