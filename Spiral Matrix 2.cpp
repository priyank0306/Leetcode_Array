class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       
        int count=1;
      
        vector<vector<int>>ans(n,vector<int>(n,1));
        
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int dir=0;
        count=1;
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
                for(int i=left; i<=right; i++)
                {
                    ans[top][i]=count++;
}
                top++;
                dir=1;
}
            else if(dir==1)
            {
                for(int i=top; i<=bottom; i++)
                {
                     ans[i][right]=count++;
} 
                right--;
                dir=2;
}
            else if(dir==2)
            {
                for(int i=right; i>=left; i--)
                {
                      ans[bottom][i]=count++;
}
                bottom--;
                dir=3;
            }
                else if(dir==3)
                {
                    for(int i=bottom; i>=top; i--)
                    {
                          ans[i][left]=count++;
}
                    left++;
                    dir=0;
}
}
return ans;
    }
};