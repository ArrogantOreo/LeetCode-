class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> char_int_table{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int len = s.length();
        int sum=0;
        for(int i=0;i<len;i++){
            if((char_int_table[s[i]]<char_int_table[s[i+1]])&&i<len-1){
                sum-=char_int_table[s[i]];
            }
            else{
                sum+=char_int_table[s[i]];
            }
        }
        return sum;
    }
};