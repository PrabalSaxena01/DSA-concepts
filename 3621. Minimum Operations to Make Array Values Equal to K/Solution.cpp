class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> s;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (k < nums[i]) {
                s.insert(nums[i]);
            } else if (k > nums[i]) {
                return -1;
            }
        }
        return s.size();
    }
};