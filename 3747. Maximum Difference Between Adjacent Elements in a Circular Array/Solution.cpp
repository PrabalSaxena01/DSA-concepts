class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int max = abs(nums[0]-nums[n-1]);
        for(int o = 1;o<n;o++){
            max = max> abs(nums[o]-nums[o-1])?max:abs(nums[o]-nums[o-1]);
        }
return max;
    }
};