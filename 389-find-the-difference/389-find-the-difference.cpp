class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<s.size();i++)
        {
            sum=sum+s[i]-'a';
        }
        for(int i=0;i<t.size();i++)
        {
            sum1=sum1+t[i]-'a';
        }
        sum=sum1-sum;
        char c=sum+'a';
        return c;
    }
};