class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len= nums.size();
        int Max=INT_MIN;
        int sum=0;
        for(int i=0;i<len;i++)
        {
            sum=sum+nums[i];
            if(sum>Max)
            {
                Max=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        // Max=sum;
        return Max;
    }
};