class Solution {
public:
    int longestPalindrome(string s) {
       /*int n[256]={0};
        for(int i=0;i<s.size();i++)
        {
            n[s[i]]++;
        }
        
       
        int sum=0;
        for(int i=0;i<256;i++)
        {
            if(n[i]%2==0)
            {
                sum=sum+n[i];
                n[i]=0;
                
            }
        }
        for(int i=0;i<256;i++)
        {
            if((n[i]%2)!=0)
            {
                sum=sum+n[i];
                break;
            }
        }
        return sum;*/
         unordered_map<char, int> counts;
        for(char c: s) counts[c]++;
        
        int result = 0;
        bool odd_found = false;
        for(auto& c: counts){
            if(c.second % 2 == 0) result += c.second;
            else{
                odd_found = true;
                result += c.second - 1;
            }
        }
        if(odd_found) result++;
        return result;
    }
};