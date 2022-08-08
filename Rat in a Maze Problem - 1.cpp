class Solution{
    public:
    void maze(vector<vector<int>>& m,int n,int i,int j,vector<string>& ans,vector<char>& temp)
    {
        if( i<0 || i>=n || j<0 || j>=n || m[i][j]==2 || m[i][j]==0) 
        {
            return;
        }
        if(i==n-1 && j==n-1)
        {
            string flag="";
            for(int i=0; i<temp.size(); i++)
            {
                flag+=temp[i];
            }
            ans.push_back(flag);
            return;
        }
        m[i][j]=2;
        temp.push_back('D');
         maze(m,n,i+1,j,ans,temp);
         temp.pop_back();
           temp.push_back('U');
         maze(m,n,i-1,j,ans,temp);
         temp.pop_back();
           temp.push_back('L');
         maze(m,n,i,j-1,ans,temp);
         temp.pop_back();
       temp.push_back('R');
         maze(m,n,i,j+1,ans,temp);
         temp.pop_back();
         m[i][j]=1;
         return;
         
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<char>temp;
        maze(m,n,0,0,ans,temp);
        return ans;
    }
};