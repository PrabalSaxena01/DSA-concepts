class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int res = 0;
        unordered_map<int, int> freq;
        for (int n : answers) {
            freq[n]++;
        }
        for (const auto& [num, count] : freq) {
           int req = (count / (num + 1)) + (count%(num+1)==0?0:1);
            res += req * (num + 1);
        }
        return res;
    }
};