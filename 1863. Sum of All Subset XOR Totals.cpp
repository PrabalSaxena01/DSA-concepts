class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
          vector<int> xorSubsets = {0};  
        for (int num : nums) {
            int size = xorSubsets.size();
            for (int i = 0; i < size; ++i) {
                xorSubsets.push_back(xorSubsets[i] ^ num);
            }
        }

        int total = 0;
        for (int val : xorSubsets) {
            total += val;
        }
        return total;
    }
};
