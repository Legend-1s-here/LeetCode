class Solution {
public:
    double myPow(double x, int n) {
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