class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int mul=1;
        long long int mul1=1;
        vector<int>ans;
        int zero=0;
        for(int i=0; i<nums.size(); i++){
            mul=mul*nums[i];
            
            if(nums[i]!=0)
            {
                mul1*=nums[i];
}
            if(nums[i]==0)
                {
                zero++;
}
            
        }
         for(int i=0; i<nums.size(); i++){
             if(nums[i]!=0)
           ans.push_back(mul/nums[i]);
             
             else if(zero==1)
             {
                 ans.push_back(mul1);
}
             else if(zero>=2)
             {
                 ans.push_back(0);
}
        }
        return ans;
    }
};