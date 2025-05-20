class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int l, r;
        int n = nums.size();
        int q = queries.size();
        vector<int> big(n + 1, 0);
        for (int i = 0; i < q; i++) {
            l = queries[i][0];
            r = queries[i][1];
            big[l] += 1;
            if (r + 1 < n)
                big[r + 1] -= 1;
        }
        for (int i = 1; i < n; i++) {
            big[i] += big[i - 1];
        }
        for (int i = 0; i < n; i++) {
            if (big[i] < nums[i])
                return false;
        }
        return true;
    }
};