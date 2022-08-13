class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
     
        int ans=0;
for(int i=0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        if(grid[i][j]==1)
            ans+=4;
    }
}
      for(int i=1; i<m; i++)
      {
          if(grid[0][i]==1 && grid[0][i-1]==1)
          {
              ans-=2;
          }
      }
          for(int j=1; j<n; j++)
      {
          if(grid[j][0]==1 && grid[j-1][0]==1)
          {
              ans-=2;
          }
      }
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                if(grid[i][j]==1 && grid[i-1][j]==1)
                {
                    ans-=2;
                }
                if(grid[i][j]==1 && grid[i][j-1]==1)
                {
                    ans-=2;
                }
            }
        }
        return ans;
        
    }
};