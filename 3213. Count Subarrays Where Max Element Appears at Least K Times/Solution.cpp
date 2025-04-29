class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int max_elem = *max_element(nums.begin(),nums.end());
        int n = nums.size();
        long long count = 0;
        long long uni = 0;
        for (; right < n; right++) {
            if(nums[right]==max_elem)uni++;
            while(uni==k){
                if(nums[left]==max_elem){
                    uni--;
                }
                left++;
            }
            count = count  + left;
        }
        return count;
    }
};