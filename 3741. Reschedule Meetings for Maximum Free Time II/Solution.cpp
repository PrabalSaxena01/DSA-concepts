class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        vector<int> gap;
        int start = 1;
        int end = 0;
        int events = startTime.size();

        gap.push_back(startTime[0] - 0);
        for (; start < events; end++) {
            gap.push_back(startTime[start++] - endTime[end]);
        }
        gap.push_back(eventTime - endTime[events - 1]);

          vector<int> largestRight(gap.size(), 0);
        for (int i = gap.size() - 2; i >= 0; --i)
            largestRight[i] = max(largestRight[i + 1], gap[i + 1]);

        int ans = 0, largestLeft = 0;
        for (int i = 1; i < gap.size(); ++i) {
            int curGap = endTime[i - 1] - startTime[i - 1];
            if (curGap <= max(largestLeft, largestRight[i]))
                ans = max(ans, gap[i - 1] + gap[i] + curGap);
            ans = max(ans, gap[i - 1] + gap[i]);
            largestLeft = max(largestLeft, gap[i - 1]);
        }
        return ans;
    }
};