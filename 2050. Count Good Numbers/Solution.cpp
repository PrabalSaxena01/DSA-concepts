class Solution {
public:
    const int MOD = 1e9 + 7;
    long long modPow(long long base, long long exp, long long mod) {
        long long result = 1;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1)
                result = (result * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {

        long long five = n % 2 == 0 ? (n / 2) : ((n / 2) + 1);
        long long four = n / 2;
        long long result = (modPow(5, five, MOD) * modPow(4, four, MOD)) % MOD;
        return result;
    }
};