class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     int a=ransomNote.size();
        int b=magazine.size();
        int c=0;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
               if(ransomNote[i]==magazine[j])
               {
                   c++;
                   magazine[j]='1';
                   break;
               }
            }
        }
        if(c==a)
            return true;
        else
            return false;
    }
};