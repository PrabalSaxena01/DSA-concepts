class Solution {
public:
    long long search(long long l, vector<int>& nums, int lo, int hi) {
        long long plus = 0;
        long long n = nums.size();
        long long low = l + 1;
        long long high = n- 1;
        long long left = n, right = n;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
           if(nums[mid]+nums[l]>=lo){
            left  = mid;
            high  = mid-1;
           }
           else{
            low = mid+1;
           }
        }
        low  = l+1;
        high = n-1;
         while (low <= high) {
            long long mid = low + (high - low) / 2;
           if(nums[mid]+nums[l]<=hi){
            right  = mid;
            low  = mid+1;
           }
           else{
            high = mid-1;
           }
        }
         if (left <= right && right < n) {
            plus = right - left + 1;
        }
        return plus;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long count = 0;
        long long n = nums.size();
        long long left = 0;
        long long right = n - 1;
        sort(nums.begin(), nums.end());
        while (left < n - 1) {
            long long p = search(left, nums, lower, upper);
            count += p;
            left++;
        }
        return count;
    }
};