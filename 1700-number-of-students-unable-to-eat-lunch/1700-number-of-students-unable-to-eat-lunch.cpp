#include <bits/stdc++.h>

class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& sa) {
        int c=0;
        bool b=true;
        while(b)
        {
           if(s[0]==sa[0])
           {
             s.erase(s.begin());
               sa.erase(sa.begin());
               c=0;
           }
            else
            {
                int d=s[0];
                s.erase(s.begin());
                s.push_back(d);
                c++;
            }
            if(c>=s.size())
                b=false;
        }
        return c;
    }
};