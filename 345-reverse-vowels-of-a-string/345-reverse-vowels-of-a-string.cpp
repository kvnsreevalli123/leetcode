class Solution {
public:
    string reverseVowels(string s) {
        vector<char> c;
        for(int i=0;i<s.length();i++)
        {
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')   
             c.push_back(s[i]);
        }
        int c1=c.size();
        for(int i=0;i<s.length();i++)
        {
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')   
         {
             s[i]=c[c1-1];
             c1--;
         }
        }
       return s; 
    }
};