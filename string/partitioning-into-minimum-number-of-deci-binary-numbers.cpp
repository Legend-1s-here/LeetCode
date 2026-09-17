class Solution{
public:
    int minPartitions(string n){
        if(n[0]<10 && n[0]>1){
            return 0;
        }
        int mx=1;
        for(int i=0;i<n.size();i++){
            mx=max(mx,n[i]-'0');
        }
        return mx;
    }
};