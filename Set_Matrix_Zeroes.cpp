class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row[n];
        int col[m];
        for(int i=0; i<n; i++)
        {
            row[i]=-1;
}
             for(int i=0; i<m; i++)
        {
            col[i]=-1;
}
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
}                    

}
}
                for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                    
if(row[i]==0 || col[j]==0)
    matrix[i][j]=0;
}
}
        
    }
};