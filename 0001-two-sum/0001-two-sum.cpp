class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        for(int i = 0; i<size(nums)-1; i++){
            for(int j = i+1; j <size(nums); j++){
                if(target==nums[i]+nums[j]){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};