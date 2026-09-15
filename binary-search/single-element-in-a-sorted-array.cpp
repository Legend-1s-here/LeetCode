class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        int mid=(end+st)/2;
        bool is=true;
        while(is){
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            else if(nums[mid]==nums[mid-1]){
                if((mid-st-1)%2==0){
                    st=mid+1;
                }
                else{
                    end=mid-2;
                }
            }
            else if(nums[mid]==nums[mid+1]){
                if((end-mid-1)%2==0){
                    end=mid-1;
                }
                else{
                    st=mid+2;
                }
            }
            mid=(end+st)/2;
        }
        return nums[mid];
    }
};