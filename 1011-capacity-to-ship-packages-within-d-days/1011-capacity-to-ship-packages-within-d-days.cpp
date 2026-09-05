class Solution {
public:
    bool canShip(vector<int>weights,int days,int capacity)
    {
        int currentweight=0;
        int reqdays=1;
        for(int weight:weights)
        {
            if(currentweight+weight>capacity)
            {
                reqdays++;
                currentweight=weight;

            }
            else
            {
                currentweight+=weight;
            }
        }
        return reqdays<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=0;
        for(int i=0;i<weights.size();i++)
        {
            right+=weights[i];
        }
        while(left<=right)
        {
            int capacity=left+(right-left)/2;
            if(canShip(weights,days,capacity))
            {
                right=capacity-1;
            }
            else
            {
                left=capacity+1;
            }
        }
        return left;
    }
};