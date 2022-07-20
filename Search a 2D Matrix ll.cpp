class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n=matrix.size();
        int m=matrix[0].size();
        int one=0;
        int two=m-1;
        while(one<n && two>=0 )
        {
            if(target==matrix[one][two])
            {
                return true;
}
            else if(target>matrix[one][two])
            {
                one++;
}
            else if(target<matrix[one][two])
            {
                two--;
}
}
 
        return false;
    }
};