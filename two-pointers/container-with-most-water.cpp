class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int ca=0;
        int ma=0;
        int l=0;
        int w=0;
        while(lp<rp){
            l=min(height[lp],height[rp]);
            w=rp-lp;
            ca=l*w;
            ma=max(ma,ca);
            if(height[lp]>height[rp]){
                rp--;
            }
            else{
                lp++;
            }
        }
        return ma;
    }
};