class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                long long y=gcd(nums[i],nums[j]);
                long long x=(1LL*nums[i] * nums[j]) / (y*y);
                if(x>max && i!=j){
                    max=x;
                }
            }
        }
        return max;
    }
};