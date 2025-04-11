class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
          int count = 0;
        for (int i = low; i <= high; i++) {
            string s = to_string(i);
            int n = s.length();
            if (n % 2 != 0) continue; // Only even-digit numbers

            int left = 0, right = 0;
            for (int j = 0; j < n / 2; j++) {
                left += s[j] - '0';
                right += s[j + n / 2] - '0';
            }

            if (left == right) count++;
        }
        return count;
    }
};