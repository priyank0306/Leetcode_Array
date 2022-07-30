class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==2)
        {
            return nums[1];
}
        if(n==1)
        {
            return nums[0];
}
        
        int one,two,three;
        one=nums[n-1];
        two=nums[n-2];
        three=nums[n-3];
        int flag=0;
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i]!=one)
            {
                two=nums[i];
                flag++;
                break;
}
}
           for(int i=n-3; i>=0; i--)
        {
            if(nums[i]!=one && nums[i]!=two)
            {
                three=nums[i];
                flag++;
                break;
}
}
        if(flag==2)
        return three;
        else 
            return one;
    }
};