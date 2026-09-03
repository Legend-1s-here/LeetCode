class Solution {
public:
    bool isPalindrome(int x) {
        int p=x;
        if(x<0){
            return false;
        }
        long long a=0;
        long long y=0;
        while(x!=0){
            a=x%10;
            y=y*10+a;
            x=x/10;
        }
        if(y==p){
            return true;
        }
        else{
            return false;
        }
    }
};