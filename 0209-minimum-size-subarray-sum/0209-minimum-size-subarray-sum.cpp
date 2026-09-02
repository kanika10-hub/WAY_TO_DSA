class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left=0;
        int right=0;
        int sum=0;
        int min_l=INT_MAX;
        while(right<nums.size())
        {
            cout<<"right"<<right<<"left:"<<left<<endl;
            sum+=nums[right];
            cout<<"sum now"<<sum<<endl;
            while(sum>=target)
            {
                min_l=min(min_l,right-left+1);
                sum-=nums[left];
                cout<<"sum after left--"<<sum<<endl;
                left++;
                cout<<left<<endl;
            }
            right++;
            cout<<"right:"<<right<<endl;
        }
        if(min_l==INT_MAX)
        {
            return 0;
        }
        return min_l;
    }
};