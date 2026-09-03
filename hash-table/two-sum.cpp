class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<size(nums);i++){
            for(int j=0;j<size(nums);j++){
                if(nums[i]+nums[j]==target && i!=j){
                    return {i,j};
                }
            }
        }
        return {};
    }
};