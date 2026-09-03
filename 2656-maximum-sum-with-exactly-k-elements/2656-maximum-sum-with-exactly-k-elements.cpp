class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
        {
        int max_n=*max_element(nums.begin(),nums.end());
        sum+=max_n+1;
        int index = max_element(nums.begin(), nums.end()) - nums.begin();
        nums[index]=max_n+1;

        }
        return sum-k;
        
    }
};