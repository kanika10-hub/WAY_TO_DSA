class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v1;
        for(int i=0;i<nums.size();i++)
        {
            int index=abs(nums[i])-1;
            nums[index]=-1*abs(nums[index]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                v1.push_back(i+1);
            }
        }
        return v1;

    }
};