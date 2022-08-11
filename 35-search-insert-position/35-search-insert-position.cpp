class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                c=i;
                break;
            }
            if(target>nums[i])
                c=i+1;
        }
        return c;
        
    }
};