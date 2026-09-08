class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int right=0;
        int left=0;
        int max_l=0;
        while(left<=right && right<s.size())
        {
            mp[s[right]]++;


            while( mp[s[right]]>1)
            {
                mp[s[left]]--;
                left++;
            }
            max_l=max(max_l,right-left+1);
            right++;
            

        }
        return max_l;
        
    }
};