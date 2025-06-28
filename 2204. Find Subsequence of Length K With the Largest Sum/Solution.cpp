class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> s;
        vector<int> result;
        s = nums;
        sort(s.begin(), s.end());
        s = vector<int>(s.end() - k, s.end());
        for (int i =0; i < nums.size() && k>0; i++) {
            auto it =find(s.begin(), s.end(), nums[i]);
            if(it!=s.end()) {
            result.push_back(nums[i]);
            s.erase(it); 
            k--;
            }
        }
        return result;
    }
};