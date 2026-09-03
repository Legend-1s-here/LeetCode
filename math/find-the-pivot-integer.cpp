class Solution {
public:
    int pivotInteger(int n) {
        int a=0;
        int b=0;
        if(n==1){
            return 1;
        }
        for(int i=n-1;i>1;i--){
            a=0;
            b=0;
            for(int j=i;j<=n;j++){
                a=a+j;
            }
            for(int k=i;k>=0;k--){
                b=b+k;
            }
            if(a==b){
                return i;
            }
        }
        return -1;
    }
};