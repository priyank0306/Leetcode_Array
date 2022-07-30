class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int low=0;
        int n=numbers.size();
        int high=n-1;
        while(low<high)
        {
            if(numbers[low]+numbers[high]>target)
                high--;
            else if(numbers[low]+numbers[high]<target)
                low++;
            else if(numbers[low]+numbers[high]==target)
            {
                ans.push_back(low+1);
                ans.push_back(high+1);
                break;
                
            }
             
}
            
        return ans;
    }
};