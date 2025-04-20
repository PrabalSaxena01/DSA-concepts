class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int res = 0;
        unordered_map<int, float> freq;
        for (int n : answers) {
            freq[n]++;
        }
        for (const auto& [num, count] : freq) {
            res += (ceil(count / (num + 1))) * (num + 1);
        }
        return res;
    }
};