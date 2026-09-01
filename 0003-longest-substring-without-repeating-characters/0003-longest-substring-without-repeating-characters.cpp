class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int sum=0;
        unordered_map<char,int> mp;
        int max_s=0;
        //cout<<"current s[right]"<<s[right]<<endl;
        //cout<<"surrent s[left]"<<s[left]<<endl;
        while(right<s.size())
        {
            mp[s[right]]++;
            //cout<<"added s[right]"<<s[right]<<endl;
            
            while(mp[s[right]]>1)
            {
                //cout<<"duplicate found , inside the loop"<<endl;
                mp[s[left]]--;
                //cout<<"s[left]"<<s[left]<<"removed"<<endl;
                left++;
                
            }   
            //cout<<"left , right "<<left <<right <<endl;   
            max_s=max(max_s,right-left+1);
            //cout<<"out of the loop , max length now:"<< max_s<<endl;
            right++;
            //cout<<"right incremented"<<right <<"now "<<endl;

        }
        return max_s;
    }
};