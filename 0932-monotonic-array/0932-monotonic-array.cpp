class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int resultI = 1;
        int resultD = 1;
     for(int i =0; i<nums.size()-1; i++){
         if(nums[i]<=nums[i+1]){
             resultI++;
         }

         if(nums[i]>=nums[i+1]){
             resultD++;
         }
     } 

     if(resultD==nums.size() ||  resultI == nums.size()){
         return true;
     }
     else{
         return false;
     }
    }
};