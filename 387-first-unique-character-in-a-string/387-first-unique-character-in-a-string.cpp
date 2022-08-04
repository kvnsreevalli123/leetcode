class Solution {
public:
    int a=0;
    int b=0;
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(i!=j)
                {
                    if(s[i]==s[j])
                    {
                       b=1; 
                        
                      break;
                    }
                
                }  
                
                }
                if(b!=1)
                {
                   a++;
                    
                    return i;
                }
            b=0;
        }
        
        return -1;
    }
};