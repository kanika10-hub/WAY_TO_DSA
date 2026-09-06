class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        if(s.size()==1)
        {
            return true;
        }
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                if(isalpha(s[i]))
                {
                v.push_back(tolower(s[i]));
                }
                else
                {
                    v.push_back(s[i]);
                }
            }
            
        }
        
        int left=0;
        int right=v.size()-1;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        while(left<=right)
        {
            if(v[left]!=v[right])
            {
                return false;
            }
            left++;
            right--;
           
        }
        return true;

        
    }
};