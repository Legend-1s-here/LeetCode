class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums[0];
        for(int i=1;i<nums.size();i++){
            if(x==nums[i]){
                return x;
            }
            else{
                x=nums[i];
            }
        }
        return x;
    }
};