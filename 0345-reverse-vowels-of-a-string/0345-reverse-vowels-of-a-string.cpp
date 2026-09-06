class Solution {
public:
    bool isvowel(char v)
    {
        if(v=='a'||v=='e'|| v=='i'|| v=='o'||v=='u') 
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            cout<<"in"<<endl;
            if(!isvowel(tolower(s[left])))
            {
                left++;
            }
            if (!isvowel(tolower(s[right])))
            {
                right--;
            }
            cout<<left<<right<<endl;
            if(isvowel(tolower(s[left]))&& isvowel(tolower(s[right])))
            {
                cout<<"inside this"<<endl;
                char temp=s[left];
                s[left]=s[right];
                s[right]=temp;
                left++;
                right--;
            }
        }
        return s;
        
    }
};