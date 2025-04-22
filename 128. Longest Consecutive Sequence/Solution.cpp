class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n;
        
        // Build hash table with one reservation to avoid rehashing
        unordered_set<int> s;
        s.reserve(n);
        for (int x : nums) {
            s.insert(x);
        }
        
        int maxCount = 1;
        // Only start counting at the beginning of each sequence
        for (const int x : s) {
            if (s.count(x - 1)) 
                continue;
            
            int current = x;
            int count = 1;
            // Walk forward until the sequence ends
            while (s.count(current + 1)) {
                ++current;
                ++count;
            }
            
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }
};
