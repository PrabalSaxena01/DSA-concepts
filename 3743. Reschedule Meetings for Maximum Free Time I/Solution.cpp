class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime,
                    vector<int>& endTime) {
        vector<int> free;
        int start = 1;
        int end = 0;
        int events = startTime.size();

        free.push_back(startTime[0] - 0);
        for (; start < events; end++) {
            free.push_back(startTime[start++] - endTime[end]);
        }
        free.push_back(eventTime - endTime[events - 1]);

        // sort(free.begin(),free.end(),greater<int>());
        int maxa = 0;
        int sum = 0;
        for (int i = 0; i <= k; i++) {
            sum += free[i];
        }
        int i = 0;
        maxa = sum;
        int j = k + 1;
        while (j < free.size()) {
            sum -= free[i++];
            sum += free[j++];
            maxa = max(maxa, sum);
        }

        return maxa;
    }
};