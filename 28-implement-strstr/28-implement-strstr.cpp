class Solution {
public:
    int strStr(string haystack, string needle) {
        /*int c=haystack.size();
        int b=needle.size();
        int k=0;
        int y=0;
        int v=0;
        int i;
        int arr[10]={-1};
        for( i=0;i<c;i++)
        {
            if(haystack[i]==needle[k])
            {
               k++; 
               
                for(int j=i;j<b;j++)
                {
                    if(haystack[i+1]==needle[k])
                    {
                        k++;
                    }
                    else
                    {
                        k=0;
                        break;
                    }
                    }
                
                    
                   }
            if(k==b)
            {
            return i;
                break;
            }
        }
        return -1;;*/
        int c=haystack.size();
        int b=needle.size();
        if(c==b && c==1)
        {
            return 0;
        }
        for(int i=0;i<=c-b;i++)
        {
            if(haystack.substr(i,b)==needle)
            {
                return i;
            }
        }
        return -1;
    }
};