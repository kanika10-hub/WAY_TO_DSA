class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()<=1)
        {
            return s.size();
        }
        int l=0;
        int i=s.size()-1;
        while(i>=0 && s[i]==' ')
        {
            i--;
        }
        while(i>=0 && s[i]!=' ')
        {
            l++;
            i--;
        }
        return l;
    }
};