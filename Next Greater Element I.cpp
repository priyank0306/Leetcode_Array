class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans; 
        
        
        
        for(int i=0; i<nums1.size(); i++)
        {
            int flag=0;
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums1[i]!=nums2[j])
                    continue;
                else
                {
                    int temp=j;
                    while(temp<nums2.size() && nums2[j]>=nums2[temp])
                        temp++;
                      if(temp==nums2.size())
                    ans.push_back(-1);
                else
                {
                    ans.push_back(nums2[temp]);
                }
                    
                }
              
            }
        }
        return ans;
    }
};