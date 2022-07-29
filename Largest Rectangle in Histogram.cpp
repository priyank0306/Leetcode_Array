class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
         vector<int>left;
    stack<int>s;
    for(int i=0; i<n; i++)
    {
        if(s.empty())
        {
            left.push_back(-1);
            s.push(i);
            // cout<<'a';
        }
        else
        {
        if(heights[s.top()]<heights[i])
        {
            // cout<<'c';
            left.push_back(s.top());
            s.push(i);
        }
        else{
            // cout<<'b';
            while( !s.empty() && heights[s.top()]>=heights[i])
            {
               
                
                s.pop();
            }
              if(!s.empty())
        {
            // cout<<'c';
            left.push_back(s.top());
            s.push(i);
        }
        else
        {
            left.push_back(-1);
            s.push(i);
        }
        
        }
        }
        }
        // ____________________
            // ________________
        
        
        
         vector<int> right;
        stack<int> st;
        for(int i=n-1; i>=0; i--)
        {
            if(st.empty())
            {
                right.push_back(n);
            st.push(i);
            }
                    else
        {
        if(heights[st.top()]<heights[i])
        {
            // cout<<'c';
            right.push_back(st.top());
            st.push(i);
        }
        else{
            // cout<<'b';
            while( !st.empty() && heights[st.top()]>=heights[i])
            {
               
                
                st.pop();
            }
              if(!st.empty())
        {
            // cout<<'c';
            right.push_back(st.top());
            st.push(i);
        }
        else
        {
            right.push_back(n);
            st.push(i);
        }
        
        }
        }
            
        }
   reverse(right.begin(),right.end());
        
        
        int ans=-1;
        for(int i=0; i<n; i++)
        {
            int temp=(right[i]-left[i]-1)*heights[i];
            ans=max(ans,temp);
}
        return ans;
    }
    
};