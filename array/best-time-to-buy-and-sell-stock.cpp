class Solution{
public:
    int maxProfit(vector<int>& prices){
        int mi=INT_MAX;
        bool is=true;
        int m=0;
        for(int i=0;i<prices.size();i++){
            if((prices[i]<mi) && (i!=prices.size()-1)){
                mi=prices[i];
                is=false;
            }
            if(mi<prices[i] && is==true){
                m=max(m,prices[i]);
            }
            is=true;
            if((prices[i]<mi) && (i==prices.size()-1)){
                return 0;
            }
        }
        return m-mi;
    }
};