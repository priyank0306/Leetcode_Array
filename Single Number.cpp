class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
     
     int ans=nums[0];
        for(int i=1; i<=nums.size()-1; i++)
        {
            ans=nums[i]^ans;
}
         return ans;      
    }
};