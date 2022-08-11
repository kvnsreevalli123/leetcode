#include <string>  
#include <vector>
class Solution {
public:
    int calPoints(vector<string>& ops) {
    vector<int> a;
         
        
     int t=0;
        int sum=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]!="+" && ops[i]!="D" && ops[i]!="C")
            {
               // int x=(stoi(ops[i]));
                  t=t+1;
            a.push_back(stoi(ops[i]));
              
            }
            if(ops[i]=="+")
            {
                a.push_back(a[a.size()-1]+a[a.size()-2]);
                t++;
            }
            if(ops[i]=="D")
            {
                a.push_back(a[a.size()-1]*2);
                t++;
                
            }
            if(ops[i]=="C")
            {
                t--;
                a.pop_back();
            }
        }
        for(int j=t-1;j>=0;j--)
        {
           sum=sum+ a[j];
        }
        return sum;
        
    }
};