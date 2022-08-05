class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
     int sum=0;
        int left=0;
        int res=-1;
                for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
        }
        int target=sum-x;
        if(target<0)
        {
            return -1;
        }
        if(target==0)
            return nums.size();
        int prefix=0;
     for(int i=0; i<nums.size(); i++)
     {
         prefix+=nums[i];
         while(prefix>target)
         {
             prefix-=nums[left++];
         }
         if(target==prefix)
         {
             res=max(res,i-left+1);
         }
         
     }
        if(res==-1)
            return -1;
        return nums.size()-res;
    }
};