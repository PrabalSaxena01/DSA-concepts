class Solution {
public:
    int maxSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        if (nums[nums.size() - 1] < 0)
            return nums[nums.size() - 1];
        int sum = 0;
        int last = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]==last || nums[i]<0)continue;
           
            sum = sum + nums[i];
            last = nums[i];
        }
        return sum;
    }
};