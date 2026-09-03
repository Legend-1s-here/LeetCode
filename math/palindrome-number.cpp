class Solution {
public:
    bool isPalindrome(int x) {
        int y,p;
        long z=0;
        p=x;
        while(x){
            y=x%10;
            x=x/10;
            z=10*z+y;
        }
        if(p==z && p>=0){
            return true;
        }
        else
        return false;

    }
};