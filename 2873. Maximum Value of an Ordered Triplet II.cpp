class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

        int maxElement = nums[0];

        int maxDiff = 0;
        long long maxTriplet = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (i >= 2)
                maxTriplet =max(maxTriplet, (long long)maxDiff * (long long)nums[i]);
            maxDiff = max(maxDiff, maxElement - nums[i]);
            maxElement = max(maxElement, nums[i]);
        }
        return maxTriplet;
    }
};
