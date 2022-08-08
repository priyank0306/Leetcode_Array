class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
      
           for(int i=0; i<nums.size(); i++)
        {
            int low=i+1;
            int high=nums.size()-1;
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
            while(low<high)
            {
                 vector<int>temp;
                int a,b,c,z;
                a=nums[i];
                b=nums[low];
                c=nums[high];
                z=-a;
              
                
                if((b+c)>z)
                {
                    high--;
}
                else if((b+c)<z)
                {
                    low++;
                    
}
                else if((b+c)==z)
                {
                   vector<int>temp;
                   temp.push_back(nums[i]); 
                   temp.push_back(nums[low]); 
                   temp.push_back(nums[high]);                   
                      ans.push_back(temp);
                    while(low<high  && nums[low]==nums[low+1]  && low<nums.size())
                    {
                        low++;
}
                    while(high>low &&nums[high]==nums[high-1]  && high>=0)
                    {
                        high--;
}
                   low++;
                    high--;
                    
}
}
            }
               
        }
        
            return ans;
    }
};