class Solution {
public:
       int maxProfit(vector<int>& prices) {
       int n=prices.size();
        if(n==0 || n==1)
            return 0;
        int minsf=prices[0];
        int mxpsf=0;
        int one[n];
        one[0]=0;
      for(int i=1; i<n; i++)
      {
          minsf=min(minsf,prices[i]);
          mxpsf=max(prices[i]-minsf,mxpsf);
          if(one[i-1]>mxpsf)
          {
              one[i]=one[i-1];
          }
          else
          {
               one[i]=mxpsf;
}
          
}
        int two[n];
        two[n-1]=0;
        int maxsf=prices[n-1];
        int mipsf=0;
             for(int i=n-2; i>=0; i--)
      {
          maxsf=max(maxsf,prices[i]);
          mipsf=max(maxsf-prices[i],mipsf);
                 if(mipsf<two[i+1])
                 {
                     two[i]=two[i+1];
                 }
                 else
                 {
                     two[i]=mipsf;
                 }
}
        int ans=-1;
        for(int i=0; i<n; i++)
        {
            ans=max(ans,one[i]+two[i]);
}

        return ans;
    }
};