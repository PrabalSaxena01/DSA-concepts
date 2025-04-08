class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> s1;
        int n = nums.size();
        int i = n - 1;
        for (; i >= 0; i--) {
         if(s1.find(nums[i]) == s1.end()) {
                s1.insert(nums[i]);
            }
            else break;
        }
    int count = (i+1)/3;
    if((i+1)%3!=0)count++;
        return count;
    }
};