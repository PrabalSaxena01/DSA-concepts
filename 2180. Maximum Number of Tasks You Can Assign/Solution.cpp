class Solution {
public:
    bool check(int num, vector<int>& tasks, vector<int>& workers, int pills,
               int strength) {
        multiset<int> wrkr(workers.end() - num, workers.end());
        for (int i = num - 1; i >= 0; i--) {
            auto cur_wrkr = --wrkr.end();
            if (*cur_wrkr < tasks[i]) {
                if (pills == 0)
                    return false;

                auto weak = wrkr.lower_bound(tasks[i] - strength);
                if (weak == wrkr.end())
                    return false;
                pills--;
                wrkr.erase(weak);
            } else {
                wrkr.erase(cur_wrkr);
            }
           
        }
         return true;
    }
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills,
                      int strength) {
        sort(tasks.begin(), tasks.end());
        sort(workers.begin(), workers.end());

        int low = 0;
        int high = min(tasks.size(), workers.size());
        int mid;
        int assigned = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (check(mid, tasks, workers, pills, strength)) {
                assigned = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return assigned;
    }
};