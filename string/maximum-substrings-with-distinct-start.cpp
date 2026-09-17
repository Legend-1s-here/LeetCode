class Solution {
public:
    int maxDistinct(string s) {
        sort(s.begin(),s.end());
        int c=1;
        int fre=s[0];
        for(int i=0;i<s.length();i++){
            if(fre!=s[i]){
                c++;
                fre=s[i];
            }
        }
        return c;
    }
};