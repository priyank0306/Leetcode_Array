class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>m;
        vector<vector<string>>ans;
        for(int i=0; i<strs.size(); i++){
            map<char,int>temp;
            vector<string>flag;
              for(int j=0; j<strs[i].size(); j++)
              {
                   temp[strs[i][j]]++;
              }
            auto itr=m.find(temp);
            if(itr!=m.end())
            {
                m[temp].push_back(strs[i]);
}
            else
            {
                flag.push_back(strs[i]);
                m.insert({temp,flag});
}
        }
        int count=0;
        for(auto i=m.begin(); i!=m.end(); i++)
        {            
  ans.push_back(i->second);
  
}
        return ans;
        
    }
};