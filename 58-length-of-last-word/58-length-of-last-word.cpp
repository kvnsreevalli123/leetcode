#include<string.h>
class Solution {
public:
    int lengthOfLastWord(string s) {
      

      int b=s.length();
        int i=b-1;
        while (i >= 0 && s[i] == ' ') i--;
       
        int c=0;
        while(i >= 0 && s[i]!=' ')
        {
           c++;
            i--;
        }
          return c;
    }
    
};