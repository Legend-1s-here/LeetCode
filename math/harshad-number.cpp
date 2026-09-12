class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int y=x;
        int a=0;
        while(y>0){
            a=a+y%10;
            y/=10;
        }
        if(x%a==0){
            return a;
        }
        return -1;
    }
};