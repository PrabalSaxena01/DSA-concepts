class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> freq;
        int count = 0;

        for (auto& d : dominoes) {
            pair<int, int> key = d[0] < d[1] ? make_pair(d[0], d[1]) : make_pair(d[1], d[0]);
            count += freq[key];
            freq[key]++;
        }

        return count;
    }
};
