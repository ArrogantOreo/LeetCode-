<<<<<<< HEAD
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag=1;
        bool zeng=true,jian=true;
        int len=nums.size();
        if(len==1){
            return true;
        }
        for(int i=0;i<len-1;i++){
            if(nums[i]>nums[i+1]){
                zeng=false;
            }
            if(nums[i]<nums[i+1]){
                jian=false;
            }
        }
    return zeng || jian;
    }
};
=======
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag=1;
        bool zeng=true,jian=true;
        int len=nums.size();
        if(len==1){
            return true;
        }
        for(int i=0;i<len-1;i++){
            if(nums[i]>nums[i+1]){
                zeng=false;
            }
            if(nums[i]<nums[i+1]){
                jian=false;
            }
        }
    return zeng || jian;
    }
};
>>>>>>> afdaed4b6c44fb63bcc1099790a5b8362e851ac0
