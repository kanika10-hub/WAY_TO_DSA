    class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {

            int left=0;
            int right=nums.size()-1;
            int s_pos=INT_MAX;
            int e_pos=INT_MAX;
            
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(nums[mid]==target)
                {
                    s_pos=mid;
                    right=mid-1;
                }
                else if (nums[mid]>target)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
                
            }
            left=0;
            right=nums.size()-1;
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(nums[mid]==target)
                {
                    e_pos=mid;
                    left=mid+1;
                }
                else if (nums[mid]>target)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
                
            }
            if(e_pos ==INT_MAX || s_pos==INT_MAX)
            {
                return {-1,-1};
            }
            return {s_pos,e_pos};


        }
    };