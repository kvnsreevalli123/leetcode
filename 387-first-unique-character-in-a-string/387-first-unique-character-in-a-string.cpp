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
                        cout<<s[i]<<endl;
                      break;
                    }
                
                }  
                
                }
                if(b!=1)
                {
                   a++;
                    cout<<s[i]<<"hi"<<endl;
                    
                    return i;
                }
            b=0;
        }
        cout<<a;
        return -1;
    }
};