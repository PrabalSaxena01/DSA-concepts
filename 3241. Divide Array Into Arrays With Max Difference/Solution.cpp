class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> result;
        vector<int> term;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < (nums.size()) - 2; i+=3) {
            term.clear();
            if (nums[i + 2] - nums[i] > k) {
                result.clear();
                break;
            }
            else{
                term.push_back(nums[i]);
                term.push_back(nums[i+1]);
                term.push_back(nums[i+2]);
                result.push_back(term);
            }
        }
        return result;
    }
};