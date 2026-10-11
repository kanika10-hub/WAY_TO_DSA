class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()+1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=i)
            return i;
        }
        if(nums[nums.size()-1]!=n-1)
        {
            return n-1;
        }
        return -1;
    }
};