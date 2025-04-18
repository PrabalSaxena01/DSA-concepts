class Solution {
public:
    string countAndSay(int n) {
        string p = "1";

        for (int i = 1; i < n; ++i) {
            string k = "";
            int freq = 1;
            for (int j = 1; j < p.length(); ++j) {
                if (p[j] == p[j - 1]) {
                    ++freq;
                } else {
                    k += to_string(freq) + p[j - 1];
                    freq = 1;
                }
            }

            k += to_string(freq) + p.back();
            p = k;
        }

        return p;
    }
};
