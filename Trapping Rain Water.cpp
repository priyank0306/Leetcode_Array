class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left[n];
        int right[n];
        int temp=-1;
        for(int i=0; i<n; i++){
            left[i]=max(temp,height[i]);
            temp=max(temp,height[i]);
            
        }
        temp=-1;
            for(int i=n-1; i>=0; i--){
            right[i]=max(temp,height[i]);
            temp=max(temp,height[i]);
            
        }
        
        int ans=0;
        cout<<right[0];
        for(int i=0; i<n; i++)
        {
            ans=ans+min(left[i],right[i])-height[i];
}
        return ans;
    }
    
};