class Solution {
public:
    int strStr(string haystack, string needle) {
        int c=0;
        int ind=INT_MAX;
        int i=0;
        int j=0;
        while(j<haystack.size())
        {
            
            i=j;
            if(haystack[i]==needle[c])
            {

                ind=min(ind,i);
                c++;
                i++;
                while (c<needle.size())
                {
                    if(haystack[i]==needle[c])
                    {
                        c++;
                        i++;
                    }
                    else
                    {
                        ind=INT_MAX;
                        c=0;
                        break;
                    }
                }
            }
            j++;
        }
        if(ind==INT_MAX)
        {
            return -1;
        }
        return ind;
    }
};