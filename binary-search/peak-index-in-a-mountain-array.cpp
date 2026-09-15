class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int mid=(n+1)/2;
        bool is=true;
        while(is){
            if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
                mid++;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
                mid--;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
        }
        return mid;
    }
};