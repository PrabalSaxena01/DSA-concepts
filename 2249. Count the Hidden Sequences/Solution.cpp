class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long minPrefix = 0, maxPrefix = 0;
        long long prefix = 0;
        
        for (int diff : differences) {
            prefix += diff;
            minPrefix = min(minPrefix, prefix);
            maxPrefix = max(maxPrefix, prefix);
        }
        
        long long res = (upper - lower + 1) - (maxPrefix - minPrefix);
        return max(0, (int)res);
    }
};