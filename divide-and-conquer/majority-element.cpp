class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int f=0;
        int ans=0;
       for(int i=0;i<nums.size();i++){
        if(f==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            f++;
        }
        else{
            f--;
        }
       }
       return ans;
    }
};