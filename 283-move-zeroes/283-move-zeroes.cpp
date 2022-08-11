class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int temp;
        if(n==0 ||n==1)
            return;
        int left=0,right=0;
        while(right<n)
        {
            if(nums[right]==0)
                ++right;
            else
            {
                temp=nums[left];
                nums[left]=nums[right];
                nums[right]=temp;
                ++left;
                ++right;
            }
        }
        
    }
};
        
   