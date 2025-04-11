class Solution {
public:
    bool check(int a) {
        vector<int> s;
        while (a > 0) {
            s.push_back(a % 10);
            a /= 10;
        }
        int n = s.size();
         if (n % 2 != 0) return false;
        int left = 0, right = 0;
        for (int i = 0; i < (n / 2); i++) {
            left += s[i];
        }
        for (int i = n - 1; i >= (n / 2); i--) {
            right += s[i];
        }
        return left == right;
    }
    int countSymmetricIntegers(int low, int high) {
        int c = 0;
        while (low <= high) {
            if (check(low))
                c++;
            low++;
        }
        return c;
    }
};