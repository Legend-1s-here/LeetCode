class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v(2*n);
        int j=0;
        int k=n;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                v[i]=nums[j];
                j++;
            }
            if(i%2!=0){
                v[i]=nums[k];
                k++;
            }
        }
        return v;
    }
};