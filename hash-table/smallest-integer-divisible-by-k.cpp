class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0){
            return -1;
        }
        if(k==1){
            return 1;
        }
        long long ans=1;
        long long c=0;
        for(int i=0;i<18;i++){
            c++;
            if(ans%k==0){
                break;
            }
            ans=ans*10+1;
            if(i==17){
                c=-1;
                break;
            }
        }
        return c;
    }
};