class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=m-1;
        int dir=0;
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
                for(int i=left; i<=right; i++)
                {
                    ans.push_back(matrix[top][i]);
}
                top++;
                dir=1;
}
            else if(dir==1)
            {
                for(int i=top; i<=bottom; i++)
                {
                     ans.push_back(matrix[i][right]);
} 
                right--;
                dir=2;
}
            else if(dir==2)
            {
                for(int i=right; i>=left; i--)
                {
                      ans.push_back(matrix[bottom][i]);
}
                bottom--;
                dir=3;
            }
                else if(dir==3)
                {
                    for(int i=bottom; i>=top; i--)
                    {
                          ans.push_back(matrix[i][left]);
}
                    left++;
                    dir=0;
}
}

return ans;


    }
};