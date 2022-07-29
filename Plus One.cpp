class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=1;
        vector<int>ans;
        for(int i=0; i<digits.size(); i++)
        {
            if(digits[i]!=9)
            {flag=0;
             break;}
            
}
        if(flag==1)
        {
            ans.push_back(1);
              for(int i=0; i<digits.size(); i++)
        {
            ans.push_back(0);
}
        }
        else
        {
            int carry=1;
              for(int i=digits.size()-1; i>=0; i--)
        {
         int temp=digits[i]+carry;
                  carry=temp/10;
                  temp=temp%10;
                  ans.push_back(temp);
            
}
            reverse(ans.begin(),ans.end());
}
        return ans;
    }
};