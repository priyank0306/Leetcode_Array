class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void generate(vector<int>& candidates,int target,vector<int> &temp,int i)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
}
        if(i>=candidates.size())
        {
            return;
}
        
        if(target<0)
        {
            return;
}    
     temp.push_back(candidates[i]);
     generate(candidates,target-candidates[i],temp,i);
     temp.pop_back();   
     generate(candidates,target,temp,i+1);
    
     
   
   
     
     return;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        generate(candidates,target,temp,0);        
        return ans;
    }
};