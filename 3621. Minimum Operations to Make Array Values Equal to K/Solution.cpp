class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> s;
        
        for (int num:nums) {
            if (k < num) {
                s.insert(num);
            } 
             if (k > num) {
                return -1;
            }
        }
        return s.size();
    }
};