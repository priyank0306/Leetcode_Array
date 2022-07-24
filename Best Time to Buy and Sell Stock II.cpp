class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=0;
        int profit=0;
        int cost;
        int flag=1;
        int n=prices.size();
        for(int i=0; i<prices.size()-1; i++)
        {
            if(prices[i]>prices[i+1])
            {
                flag=0;
                break;
}
}
       for(int i=0; i<prices.size()-1; i++)
       {
           if(b==0 && prices[i]>prices[i+1])
           {
               continue;
}
           if(b==0 && prices[i]<prices[i+1])
           {
               b=1;
               cost=prices[i];
               continue;
}
           if(b==1 && prices[i]<prices[i+1])
           {
               continue;
}
           if(b==1 && prices[i]>prices[i+1])
           {
               profit=profit+prices[i]-cost;
               b=0;
               continue;
}
         
}
        if(b==1)
        {
            profit+=prices[n-1]-cost;
}
        if(flag==0)
        return profit;    
        else
        {
            return prices[n-1]-prices[0];
}
    }
};