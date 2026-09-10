class Solution {
public:
    int search(vector<int>& nums, int target){
        long long st=0;
        long long end=nums.size()-1;
        while(st<=end){
            long long m=nums[st];
            long long mid=st+(end-st)/2;
            if(target>nums[mid]){
                st=mid+1;
            }
            else if(target<nums[mid] && target>=m){
                end=mid-1;
            }
            else if(target<nums[mid] && target<m){
                st=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};