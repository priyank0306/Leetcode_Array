class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        int count=0;
            
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
}
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> g ;
     for(auto i=m.begin(); i!=m.end(); i++)
     {
         g.push({i->second,i->first});
         count++;
         if(count>k)
         {
             g.pop();
}
}
        for(int i=0; i<k; i++)
        {
            pair<int,int>p;
            p=g.top();
            g.pop();
            ans.push_back(p.second);
}
        return ans;
    }
};