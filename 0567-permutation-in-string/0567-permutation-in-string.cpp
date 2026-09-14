class Solution {
public:  

    bool check( string s2,string s1,unordered_map<char,int> mp)
    {
        int l=0;
        int r=s1.size()-1;
        unordered_map<char,int> mp1;
        cout<<"inside mp initialize "<<endl;
        for(int i=l;i<=r;i++)
        {
            mp1[s2[i]]++;
            cout<<"added s2[i] "<<s2[i]<<" to map"<<endl;
        }

        while( r+1<=s2.size())
        {

            if(mp1==mp)
            {
                return true;
            }
           
            else
            {
                 cout<<"mp1 != mp"<<endl;
                if(mp1[s2[l]]==1)
                {
                    mp1.erase(s2[l]);
                }
                else
                {
                mp1[s2[l]]--;
                }
                r++;
                mp1[s2[r]]++;
                l++;
                cout<<"removed left added right  "<<endl;
                cout<<"now the r : "<<r<<" now l is "<<l<<endl;
            }
        }
        cout<<"returning false "<<endl;
        return false;
        
    }
    bool checkInclusion(string s1, string s2) {
        int ptr=0;
        if(s1.size() > s2.size())
        {return false;
        }        
        unordered_map<char,int> mp;  
        unordered_map<char,int>try_mp;  
        while(ptr<s1.size())
        {
            mp[s1[ptr]]++;
            ptr++;
        }
        try_mp=mp;
        
       
            if(check(s2,s1,try_mp))
            {
                return true;
            }
            
        

    return false;
    }
};