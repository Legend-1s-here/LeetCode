class Solution {
public:
    double myPow(double x, int n) {
        if(x==1){
            return 1;
        }
        if(n==0){
            return 1;
        }
        if(x==-1 && n%2==0){
            return 1;
        }
        if(x==-1 && n%2!=0){
            return -1;
        }
        int bin=n;
        if(n<0){
            x=1/x;
            bin=-bin;
        }
        double ans=1;
        while(bin>0){
            if(bin%2==1){
                ans*=x;
            }
            bin/=2;
            x=x*x;
        }
        return ans;
    }
};