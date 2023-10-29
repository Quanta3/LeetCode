class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int countf=0;
        int countg=0;
        for(int i = 0; i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                countf++;
            }
            if(nums[i]<=nums[i+1]){
                countg++;
            }
        }
        if(countf==nums.size()-1 || countg==nums.size()-1){
            return true;
        }
        else{
            return false;
        }
    }
};