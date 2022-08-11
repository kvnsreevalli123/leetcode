#include<vector>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v1;
       // To store index of next unique element
    int j = 0;
 
    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < nums.size()-1; i++){
        if (nums[i] != nums[i+1])
        {
            nums[j] = nums[i];
            j=j+1;
        }
        
    }
 
    nums[j++] = nums[nums.size()-1];
 
    return j;
}
};