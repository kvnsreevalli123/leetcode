
#include <deque>
#include <iterator>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /* int idx = digits.size()-1;
        while(idx >= 0){
            if(digits[idx] == 9)
                digits[idx] = 0;
            else{
                digits[idx] += 1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(), 1);
        return digits;*/
        int n=digits.size();
        int sum=0;
        int rem;
        for(int i=n-1;i>=0;i--)
        {
          digits[i]=digits[i]+1;
            if(digits[i]>=10)
            {
                rem=digits[i]%10;
                digits[i]=rem;
                if(i==0)
                {
                    int target = 1;
             digits.insert(digits.begin(), target);
 
                }
                continue;
            }
            break;
        }
       
        return digits;
        
    }
};