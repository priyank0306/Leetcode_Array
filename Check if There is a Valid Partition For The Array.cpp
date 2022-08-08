class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        for(int i=0; i<n; i++)dp[i]=-1;
      return   func(nums,0,dp);
    }
    bool func(vector<int>& nums,int i,int dp[])
    {
         if(i==nums.size())          
            return true;            
          if(dp[i]!=-1)
              return dp[i];
        
       
        
        
        if(i==nums.size())
        {   
            return true;            

        }
        
        if(i>=nums.size()-1)
        {
            return false;
        }
       
        if(i<nums.size()-1 && nums[i]==nums[i+1])
        {
       
            if(func(nums,i+2,dp))
            {
                return dp[i]=true;
            }
          
    

                
        }     
       
          if(i<nums.size()-2 &&nums[i]==nums[i+1] &&  nums[i+1]==nums[i+2])
        {

              if(func(nums,i+3,dp))
                 return  dp[i]=true;             
          
        }
          if(i<nums.size()-2 && nums[i]==nums[i+1]-1 && nums[i+1]==nums[i+2]-1)
        {
                  
              if(func(nums,i+3,dp))
                return dp[i]=true;
             
           
        }
       
    
        return dp[i]=false;
    }
};