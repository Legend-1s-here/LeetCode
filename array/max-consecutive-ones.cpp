class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0;
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                x++;
            }
            if(x>m){
                m=x;
            }
            if(nums[i]!=1){
                x=0;
            }
        }
        return m;
    }
};