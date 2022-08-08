class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            auto itr=m.find(target-nums[i]);
            if(itr!=m.end())
            {
              ans.push_back(itr->second);
                ans.push_back(i);
            }
            else
            {
                m.insert({nums[i],i});
            }
        }
        return ans;
    }
};