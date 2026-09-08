class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int max_l=0;
        unordered_map<int,int> mp;
        while(left<=right && right<s.size())
        {
            mp[s[right]]++;
            while(mp[s[right]]>1)
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