class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()==1)
        {
            return s;
        }
        if(k>s.size())
        {
            k=s.size();
        }
        int left=0;
        int right=k-1;
        while(left<=right)
             {
                int temp=s[right];
                s[right]=s[left];
                s[left]=temp;
                left++;
                right--;
             }
        
        
        for(int i=2*k;i<s.size();i+=2*k)
        {
             left=i;
             right=min(i+k-1,(int)s.size()-1);
             
             while(left<right)
             {
                int temp=s[right];
                s[right]=s[left];
                s[left]=temp;
                left++;
                right--;
             }

        }
        return s;
        
    }
};