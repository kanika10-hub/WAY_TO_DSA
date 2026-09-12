class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int ptr=0;
        vector<char> vec1;
        vector<char> vec2;
        while(ptr<s.size())
        {
            if(s[ptr]=='#')
            {                
               if(!vec1.empty())
                {
                    vec1.pop_back();
                }
                
            }
            else
            {
                vec1.push_back(s[ptr]);
            }
            ptr++;
        }
        ptr=0;
        while(ptr<t.size())
        {
            if(t[ptr]=='#')
            {
               if(!vec2.empty())
                {
                    vec2.pop_back();
                }
            }
            else
            {
                vec2.push_back(t[ptr]);
            }
            ptr++;
        }
        ptr=0;
        if(vec1.size()!=vec2.size())
        {
            return false;
        }
        else
        {
            while(ptr<vec1.size())
            {
                if(vec1[ptr]!=vec2[ptr])
                {
                    return false;
                }
                ptr++;
            }
        }
        return true;
        
    }
};