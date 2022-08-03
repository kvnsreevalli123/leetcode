class Solution {
public:
    bool isAnagram(string s, string t) {
        /*int s1=s.size();
      int  gquiz1[s1];
        for(int i=0;i<s1;i++)
        {
            gquiz1[i]=0;
        }
        int v=0;
  if(s.size()!=t.size())
      return false;
        else{
   
        int c=0;
        for(int i=0;i<t.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {v=1;
                if(t[i]==s[j]  && gquiz1[j]!=-1)
                {
                  gquiz1[j]=-1; 
                   
                    c++;
                    break;
                }
                
            }
            if(v==0)
            {
                break;
            }
        }
        
       
        if(c==s.size())
            return true;
        else
            return false;
        }*/
        int a[26]={0};
        int b[26]={0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            b[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};