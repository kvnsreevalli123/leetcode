#include<string>  
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        string a="";
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                a="FizzBuzz";
                s.push_back(a);
            } 
            else if(i%3==0)
            {
                a="Fizz";
                s.push_back(a);
            }
            else if(i%5==0)
                {
                a="Buzz";
                s.push_back(a);
            }
            else
            {
                 a=to_string(i);
                s.push_back(a);
            }
            
        }
        return s;
        
    }
};