class Solution {
public:

    
    vector<int> singleNumber(vector<int>& nums) {
        int temp=nums[0];
        int n=nums.size();   
           vector<int>ans;
        vector<int>a;
        vector<int>b;
        for(int i=1; i<n; i++)
        {
            temp=temp^nums[i];
}
        int index=ffs(temp);
        for(int i=0; i<n; i++){
        int flag=nums[i];
            int in=flag>>(index-1);
            if((in&1)==1)
                a.push_back(nums[i]);
            // cout<<in<<"\t";
            else
            b.push_back(nums[i]);
}
        int temp1;
         int temp2;
         temp1=a[0];
        for(int i=1; i<a.size(); i++)
        {
           temp1=temp1^a[i];
            // cout<<a[i]<<"\t";
}
        temp2=b[0];
        for(int i=1; i<b.size(); i++)
        {
            temp2=temp2^b[i];
            // cout<<b[i]<<"\t";
}
        
   ans.push_back(temp1);
                 ans.push_back(temp^temp1);
        return ans;
        
    }
};