class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        for(int i : nums){
            result.push_back(nums[i]);
        }
        return result;
    }
};