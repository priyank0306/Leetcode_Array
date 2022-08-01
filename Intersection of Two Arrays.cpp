class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      int  count[1002]={0};
    int n=nums1.size();
        vector<int>ans;
        int m=nums2.size();
        for(int i=0; i<n; i++)
        {
            count[nums1[i]]++;            
        }
        for(int j=0; j<m; j++)
        {
            if(count[nums2[j]]!=0)
                ans.push_back(nums2[j]);
            count[nums2[j]]=0;
}
        return ans;
    }
};