class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j]=='.')
                {
                    for(char k='1'; k<='9'; k++)
                    {
                        if(isValid(board,i,j,k)==true)
                        {
                            board[i][j]=k;
                            if(solve(board)==true)return true;
                            else 
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
}
    bool isValid(vector<vector<char>>& board,int i,int j,char k)
    {
        for(int a=0; a<9; a++)
        {
            if(board[i][a]==k)
                return false;
            
            if(board[a][j]==k)
                return false;   
            if(board[3*(i/3)+a/3][3*(j/3)+a%3]==k)
                return false;
        }
        return true;
    }
};