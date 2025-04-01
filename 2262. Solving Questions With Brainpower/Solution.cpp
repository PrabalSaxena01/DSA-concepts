class Solution {

public:
    long long greatest(vector<vector<int>>& questions, int pos,
                       vector < long long > &mem) {
        int n = mem.size();
        if (pos >= n)
            return 0;
        if (mem[pos] != -1)
            return mem[pos];
        long long exclude = greatest(questions, pos + 1,mem);
        long long include =questions[pos][0]+ greatest(questions, pos + questions[pos][1]+1,mem);
        return mem[pos] = max(include,exclude);
    }

    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n, -1);
        long long result = greatest(questions, 0, dp);
        return result;
    }
};