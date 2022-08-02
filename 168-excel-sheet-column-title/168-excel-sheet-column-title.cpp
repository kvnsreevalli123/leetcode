class Solution {
public:
    string convertToTitle(int columnNumber) {
         
        vector<int> a;
        string c="";
        int rem=0;
        char ch;
        int n=columnNumber;
        while(n>26)
        {
            rem=n%26;
            a.push_back(rem);
           
            n=n/26;
            if(rem==0)
                n=n-1;
        }
        c='A'+n-1;
        for(int i=a.size()-1;i>=0;i--)
        {if(a[i]==0)
        {
            ch='Z';
            c=c+ch;
        }
         else
         {
            ch=a[i]+'A'-1;
            c=c+ch;
         }
        }
        return c;
    }
};