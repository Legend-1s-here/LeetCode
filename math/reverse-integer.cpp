class Solution {
public:
    int reverse(int x) {
        long long a=0;
        long long y=0;
        bool is=true;
        if(x<0){
            is=false;
        }
        while(x!=0){
            a=x%10;
            y=y*10+a;
            x=x/10;
        }
        if (y > INT_MAX || y < INT_MIN) {
            return 0;
        }
        return y;
    }
};