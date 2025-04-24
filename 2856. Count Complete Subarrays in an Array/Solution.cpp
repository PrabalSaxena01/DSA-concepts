class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        unordered_set<int> fullSet(nums.begin(), nums.end());
        int dis = fullSet.size();

        for (int left = 0; left < n; ++left) {
            unordered_set<int> s;
            for (int right = left; right < n; ++right) {
                s.insert(nums[right]);
                if (s.size() == dis)
                    ans++;
            }
        }

        return ans;
    }
};