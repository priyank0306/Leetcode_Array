class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
              sort(s.begin(),s.end());
        int j=s.size()-1;
        int count=0;
        for(int i=g.size()-1; i>=0; i--)
        {
            if(j<0)
                break;
            if(g[i]>s[j])
            {
                continue;
            }
            else
            {
                j--;
                count++;
            }
        }
        return count;
    }
};