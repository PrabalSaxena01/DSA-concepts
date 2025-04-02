class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

        // 1️. Largest element so far
        int maxElement = nums[0];
        // 2. Largest difference so far
        int maxDiff = nums[1] - nums[0];
        // if (maxDiff < 0)
        maxDiff = 0;
        // 3. Largest triplet value so far
        long long maxTriplet = maxDiff * nums[2];
        for (int i = 1; i < nums.size(); i++) {
            if (i >= 2)
                maxTriplet =
                    max(maxTriplet, (long long)maxDiff * (long long)nums[i]);

            if (i >= 1)
                maxDiff = max(maxDiff, maxElement - nums[i]);
            maxElement = max(maxElement, nums[i]);
        }
        return maxTriplet;
    }
};
