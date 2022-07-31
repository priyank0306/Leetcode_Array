class Solution {
public:
    void calculate(vector<vector<char>>& grid,int i,int j,int n,int m)
    {
        if(i>n-1 || j>m-1 || i<0 || j<0 ||grid[i][j]=='0') 
            return;
        
          
        grid[i][j]='0';
                    calculate(grid,i+1,j,n,m);
                    calculate(grid,i,j+1,n,m);
                    calculate(grid,i-1,j,n,m);
                    calculate(grid,i,j-1,n,m);
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]=='1')
                {
                    
                   
                    calculate(grid,i,j,n,m);
                   count++;
}
                
}
}
        return count;
    }
};