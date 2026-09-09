class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(pre);
            pre=pre*nums[i];
        }
        int suf=1;
        for(int j=nums.size()-1;j>=0;j--){
            v[j]=v[j]*suf;
            suf=suf*nums[j];
        }
        return v;
    }
};