
class Solution {

public:
    vector<vector<int>> ans;
    vector<int>sub;
    void generate(vector<int>& sub,int i,vector<int>& nums)
    {
        if(i==nums.size())
        {
            ans.push_back(sub);
            return;
}
        generate(sub,i+1,nums);
        sub.push_back(nums[i]);
        generate(sub,i+1,nums);
        sub.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        generate(sub,0,nums);
        return ans;
    }
};
   
