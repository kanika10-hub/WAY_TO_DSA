class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int min_size=INT_MAX;
        int sum=0;
        while(right<nums.size())
        {
            sum+=nums[right];
            right++;
            while(sum>=target)
            {
                min_size=min(min_size,right-left);
                sum-=nums[left];
                left++;

            }
        }
        if(min_size==INT_MAX)
        {
            return 0;
        }
        return min_size;  
    }   
};