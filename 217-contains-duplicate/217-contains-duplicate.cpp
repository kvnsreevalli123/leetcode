#include <algorithm>  
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool c=false;
        int a=nums.size();
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            

                if(nums[i]==nums[i+1])
                {
                    c=true;
                    break;
                }
            }
        
        return c;
        
    }
};