class Solution {
public:
    bool isSafe(vector<string>& board,int n,int row,int col)
    {
        
        if( row<0 || col<0 || row>n-1 || col>n-1)
            return false;
        
        int temp1=row;
        int temp2=col;
        while(temp1>=0 && temp2>=0)// Check the upper diagonal
        {
            if(board[temp1][temp2]=='Q')return false;
            temp1--;
            temp2--;
        }
        
         temp1=row;
         temp2=col;
           while(temp2>=0)// left horizontal
        {
            if(board[temp1][temp2]=='Q')return false;
            temp2--;
        }
          temp1=row;
          temp2=col;
             while(temp2>=0 && temp1<n)// Check the lower diagonal
        {
            if(board[temp1][temp2]=='Q')return false;
            temp2--;
            temp1++;
        }
        return true;
        
    }
    void solve(vector<vector<string>> &ans,int n,int col,vector<string> &board)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int i=0; i<n; i++)
        {
            if(isSafe(board,n,i,col))
            {
                board[i][col]='Q';
                solve(ans,n,col+1,board);
                board[i][col]='.';
            }
        }
    }
        
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string  s(n,'.');    
         for(int i=0; i<n; i++)
        {
            board[i]=s;
             
         }
      solve(ans,n,0,board);
        return ans;
    }
};