class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        
        for(int i=0; i<emails.size(); i++){
            string temp="";
             int flag=0;
            int flag2=0;
            for(int j=0; j<emails[i].size(); j++)
            {           
            if(flag==0)
            {
                if(emails[i][j]=='@')
                {
                    flag=1;
                    temp+=emails[i][j];
                }
                else if(emails[i][j]=='+')
                {
                    flag2=1;
                }
                else if( flag2==0 && emails[i][j]=='.')
                {
                    continue;
}
                else if(flag2==0)
                {
                    temp+=emails[i][j];
                }
                
            }
              else if(flag==1)
                {
                    temp+=emails[i][j];
                }
            }
            s.insert(temp);
}
      
        
        return s.size();
    }
};