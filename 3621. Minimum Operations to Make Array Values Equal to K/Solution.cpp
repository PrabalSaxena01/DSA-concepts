class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> s;
        set<int> s2;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (k < nums[i]) {
                s.insert(nums[i]);
            } else if (k > nums[i]) {
                // s2.insert(nums[i]);
                return -1;
            }
        }
        // if (s.size() == 0) {
        //     if (s2.size() > 0) {
        //         return -1;
        //     } else
        //         return 0;
        // }
        return s.size();
    }
};