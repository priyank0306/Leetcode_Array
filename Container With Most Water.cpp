class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int max_area=-1;

        
        while(low<high){
            int area=0;
if(height[low]<height[high])
{
    area=height[low]*(high-low);
    max_area=max(area,max_area);
    low++;
}
            else if(height[low]>height[high])
            {
                
                    area=height[high]*(high-low);
                  max_area=max(area,max_area);
                high--;
}
            else
            {
                    area=height[low]*(high-low);
    max_area=max(area,max_area);
                high--;
                low++;
}
        }
        return max_area;
    }
};