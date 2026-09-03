class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int m;
        for(int i=0;i<nums.size();i++){
            m=m+nums[i];
        }
        if(m%k==0){
            return 0;
        }
        else{
            return m%k;
        }
    }
};