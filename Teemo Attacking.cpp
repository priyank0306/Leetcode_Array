class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0;
        
        for(int i=0; i<timeSeries.size()-1; i++)
        {
            if(timeSeries[i]+duration-1>=timeSeries[i+1])
            {
                ans+=timeSeries[i+1]-timeSeries[i];
                
            }
            else
            {
                
                ans+=duration;
                
            }
            
        }
          ans+=duration; 
        return ans;
    }
};