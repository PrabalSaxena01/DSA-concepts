class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long min = INT_MAX;
        long long max = INT_MIN;
        long long x = 0;
        vector<int> arr;
        arr.push_back(x);
        for (long long num : differences) {

            x += num;
            arr.push_back(x);
        }
        for (int num : arr) {
            if (num < min) {
                min = num;
            }
            if (num > max) {
                max = num;
            }
        }
        long long res = (upper - lower + 1) - (max - min);
        res = res > 0 ? res : 0;
        return (int)res;
    }
};