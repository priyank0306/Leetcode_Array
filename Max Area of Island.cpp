class Solution {
public:
    int ans=-1;
        void calculate(vector<vector<int>>& grid,int i,int j,int n,int m,int& count)
    {
        if(i>n-1 || j>m-1 || i<0 || j<0 ||grid[i][j]==0) 
            return;
   if(grid[i][j]==1)
            count++;
          
        grid[i][j]=0;
             // ans=max(count,ans);
            // count=0;
                    calculate(grid,i+1,j,n,m,count);//down
                    calculate(grid,i,j+1,n,m,count);//right
                    calculate(grid,i-1,j,n,m,count);//top
                    calculate(grid,i,j-1,n,m,count);//left
            // cout<<"a";
              // cout<<count<<"\t";
                
            ans=max(count,ans);
            // count=0;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
            int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                {
                                        
                    
            
                   count=0;
                
                    calculate(grid,i,j,n,m,count);
                   
}
                
}
}
        if(ans!=-1)
        return ans;
        else 
          return 0;
    }
};