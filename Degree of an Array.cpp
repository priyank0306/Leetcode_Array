class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>count;
        map<int,int>m1;
        map<int,int>m2;
        int ans=100000;
        int max=-1;
        for(int i=0; i<nums.size(); i++)
        {
            count[nums[i]]++;
            m1[nums[i]]=-1;
            m2[nums[i]]=-1;
        }
for(int i=0; i<nums.size(); i++)
{
    if(m1[nums[i]]==-1)
    {
        m1[nums[i]]=i;
    }
}
  
        for(int i=nums.size()-1; i>=0; i--)
{
    if(m2[nums[i]]==-1)
    {
        m2[nums[i]]=i;
    }
}
  for(auto x:count)
  {
      if(x.second>max)
      {
          
          max=x.second;
          ans=m2[x.first]-m1[x.first];     
          
      }
      else if(x.second==max)
      {
               ans=min(ans,m2[x.first]-m1[x.first]);
      }
  }
        return ans+1;
    }
};