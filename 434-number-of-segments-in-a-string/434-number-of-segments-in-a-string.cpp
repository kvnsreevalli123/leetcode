class Solution {
public:
    int countSegments(string s) {
     int words=0;
        int c=1;
        //string s1=" ";
        //vector<string> a;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]!=' ')
           {
              //s1=s1+s[i];
               c=0;
           }
           if(c==0 && s[i]==' ')
           {
               //a.push_back(s1);
               words++;
               //s1=" ";
               c=1;
           }
           if(c==0 && i==s.length()-1)
           {//a.push_back(s1);
            words++;
               //s1=" ";
               c=1;
               
           }
           
       }

       return words; 
    }
};