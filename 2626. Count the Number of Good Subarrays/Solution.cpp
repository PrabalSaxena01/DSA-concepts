class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long ans = 0, pairs = 0;
        int l = 0;
        
        for (int r = 0; r < nums.size(); ++r) {
           
            pairs += freq[nums[r]];
            freq[nums[r]]++;
            
     
            while (pairs >= k) {
                ans += nums.size() - r;
                freq[nums[l]]--;
                pairs -= freq[nums[l]];
                l++;
            }
        }
        return ans;
    }
};
