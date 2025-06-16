class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int s = nums.size();
        int min = nums[0];
        int diff = -1; 
        for(int i = 1;i<s;i++){
            if(nums[i]!=min){
            diff = diff>(nums[i]-min)?diff:(nums[i]-min);
            }
            min = min<nums[i]?min:nums[i];
        }
        if(diff<0)diff=-1;
        return diff;
    }
};