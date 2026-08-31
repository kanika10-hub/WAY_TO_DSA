class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int left=0;
        int right=k;
        long long  sum=0;
        long long  max_sum=0;
        unordered_map<int,int> mp;
        
        
        if(nums.size()<k)
        {
            return 0;
        }
        for(int i=left;i<right;i++)
        {
            mp[nums[i]]++;
            sum += nums[i];
        }
        if (mp.size() == k) {
            max_sum = sum;
        }
        
        
        while(right<nums.size())
        {
            sum -= nums[left];
            mp[nums[left]]--;

            if (mp[nums[left]] == 0) {
                mp.erase(nums[left]);
            }

            left++;

            // Add right element
            sum += nums[right];
            mp[nums[right]]++;

            right++;

            // Check if all elements are distinct
            if (mp.size() == k) {
                max_sum = max(max_sum, sum);
            }
        }

        return max_sum;
    }
};