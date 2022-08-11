class Solution {
public:
    int missingNumber(vector<int>& nums) {
       /* int a,j=0;
        for(int i=0;i<=nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]==i)
                {
                   break; 
                }
            }
            if(j==(nums.size()))
                a=i;
        }
        return a;*/
        int f;
        int s=nums.size()+1;
        int a[s];
           int len = sizeof(a)/sizeof(a[0]);

        for (int i = 0; i < s; i++) {
        a[i] = 0;
    }
 
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]=1;
        }
        for(int i=0;i<len;i++)
        {
            if(a[i]==0)
                f=i;
                
        }
        return f;
    }
};