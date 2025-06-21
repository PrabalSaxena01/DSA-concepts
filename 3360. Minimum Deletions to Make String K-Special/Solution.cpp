class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int> freq(26, 0);

        for (int i = 0; i < word.size(); i++) {
            freq[word[i] - 'a']++;
        }
        sort(freq.begin(), freq.end());

        int ans = INT_MAX;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] == 0)
                continue;

            int deletions = 0;
            for (int j = 0; j < i; ++j)
                deletions += freq[j];

            for (int j = i + 1; j < 26; ++j)
                if (freq[j] > freq[i] + k)
                    deletions += freq[j] - (freq[i] + k);

            ans = min(ans, deletions);
        }

        return ans == INT_MAX ? 0 : ans;
    }
};