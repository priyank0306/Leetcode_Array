class Solution {
public:
    
    int generate(vector<int>& nums,long long int temp,int arr[])
    {
                if(arr[temp]!=-1)
        {
            return arr[temp];
}
      int count=0;
        
        if(temp<0)
        {
            return 0;
}
        if(arr[temp]!=-1)
        {
            return arr[temp];
}
    
        for(int j=0; j<nums.size(); j++)
        {
            if(nums[j]<=temp)
          count+=generate(nums,temp-nums[j],arr);
}
         arr[temp]=count;
        return arr[temp];
}
    int combinationSum4(vector<int>& nums, int target) {
        long long int temp=target;
        int n=nums.size();
        int z=target+1;
        int arr[z];
        for(int i=0; i<z; i++)arr[i]=-1; 
        
        
    sort(nums.begin(),nums.end());
        
   if(nums[0]>target)
   {
       return 0;
}
        arr[0]=1;
        
       int ans=generate(nums,temp,arr);
        
        return ans;
    }
};