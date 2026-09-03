class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr.size()==0 || arr.size()==1 || arr.size()==2){
            return true;
        }
        else{
            bool is=false;
        for(int i=1;i<arr.size()-1;i++){
            if((arr[i]-arr[i-1])==(arr[i+1]-arr[i])){
                is=true;
            }
        }
        return is;
        }
    }
};