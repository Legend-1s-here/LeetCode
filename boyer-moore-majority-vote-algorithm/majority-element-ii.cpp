class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        int n=nums.size()/3;
        sort(nums.begin(),nums.end());
        int freq=0;
        int a=nums[0];
        for(int i=0;i<nums.size();i++){
            if(a==nums[i]){
                freq++;
            }
            else{
                a=nums[i];
                freq=1;
            }
            if(freq>n){
                v.push_back(nums[i]);
            }
        }
        for(int j=0;j<v.size()-1;j++){
            if(v[j]==v[j+1]){
                v.erase(v.begin()+j);
                j--;
            }
        }
        return v;
    }
};