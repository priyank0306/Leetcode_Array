class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=-1000000;
        int n= prices.size();
        int sell[n];
        int buy[n];
        int max_price=-10000000;
        int min_price=99999999;
        for(int i=n-1; i>=0; i--)
        {
           max_price=max(max_price,prices[i]);
            sell[i]=max_price;
}
   
             for(int i=0; i<n-1; i++)
        {
           min_price=min(min_price,prices[i]);
            buy[i]=min_price;
}
             for(int i=0; i<n-1; i++)
        {
                 ans=max(sell[i]-buy[i],ans);
             }
   
   
        if(ans>=0)
        return ans;
        else
            return 0;
    }
};