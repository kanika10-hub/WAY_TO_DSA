class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1= "qwertyuiop";
        string row2="asdfghjkl";
        string row3= "zxcvbnm";
        
        vector<string> s;
        vector<string> finall;
        for(string s:words)
        {
            string row="";
            bool valid=true;
            for(char ch : s)
            {
                ch = tolower(ch);
            
                if(row1.find(ch) != string::npos)
                {
                    if(row.empty())
                    {
                     row="row1";
                    }
                    else if (row!="row1")
                    {
                        valid=false;
                        break;
                    }
                }
                else if(row2.find(ch) != string::npos )
                {
                    if(row.empty())
                    {
                     row="row2";
                    }
                    else if (row!="row2")
                    {
                        valid=false;
                        break;
                    }

                }
                else
                {
                   if(row.empty())
                    {
                     row="row3";
                    }
                    else if(row!="row3")
                    {
                        valid=false;
                        break;
                    }
                }

            }
            if(valid)
            {
            finall.push_back(s);
            }
        }
        return finall;
    }
};