class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,char> mp1;
        vector<string> vec;
        vector<char> vec1;
        string word;
        stringstream ss(s);
        int i=0;
        for(char ch : pattern)
        {
            vec1.push_back(ch);
        }
        while(ss>>word)
        {
            vec.push_back(word);
        }
        if(pattern.size() != vec.size())
        { return false;
        }
        i=0;
        for(char ch :pattern)
        {
            if(mp.find(ch)!=mp.end())
            {
                if(mp[ch]!=vec[i])
                {
                    return false;
                    
                }
                
                
            }
            else 
            {
                mp[ch]=vec[i];              
                
                
            }
            i++;
        }
        i=0;
        for(string st :vec)
        {
            if(mp1.find(st)!=mp1.end())
            {
                if(mp1[st]!=vec1[i])
                {
                    return false;                    
                }               
                
            }
            else 
            {
                mp1[st]=vec1[i];
                
                
                
            }
            i++;
        }
        
        return true;

    }
};