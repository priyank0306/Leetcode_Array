class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
          int n=citations.size();
        int temp=n;
        for(int i=0; i<n; i++)
            if(citations[i]>=temp)
            {
                return temp;
}
        else
        {
            temp--;
}
        return 0;
    }
};