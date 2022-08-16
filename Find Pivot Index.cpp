class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        float sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
}
        float curr_sum=0;
        for(int i=0; i<nums.size(); i++)
        {
           
            if(curr_sum==(sum-nums[i])/2)
            {
                return i;
}
             curr_sum+=nums[i];
        }
        return -1;
    }
};