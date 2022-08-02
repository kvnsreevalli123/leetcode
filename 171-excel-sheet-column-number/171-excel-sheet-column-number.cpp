
#include <math.h>
class Solution {
public:
    int titleToNumber(string columnTitle) {
        string n=columnTitle;
        int a=n.size();
        int sum=0;
        int j;
        int s;
        for(int i=0;i<a;i++)
        {   j=a-i-1;
             s=int(n[i])-65+1;
            sum=sum+s*pow(26,j);
        }
        return sum;
    }
};