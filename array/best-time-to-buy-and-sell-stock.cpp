class Solution{
public:
    int maxProfit(vector<int>& prices){
        int mi=INT_MAX;
        bool is=true;
        int m=0;
        int buy=prices[0];
        int sell=0;
        int cp=0;
        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]);
            sell=prices[i];
            cp=sell-buy;
            m=max(cp,m);
        }
        return m;
    }
};