class Solution {
public:
    string countAndSay(int n) {

        string p = "1";
     
        for (int i = 1; i < n; i++) {
            string k = "";
            int freq = 0;
            char num = p[0];
            for (int j = 0; j < p.length(); j++) {
                if (p[j] == num) {
                    freq++;
                }
                else if (p[j] != num) {
                    k = k + to_string(freq) + num;
                    num = p[j];
                    freq = 1;
                }
                if(j == p.length() - 1){
                    num = p[j];
                    k = k + to_string(freq) + num;
                }
            }

            p = k;
        }
        return p;
    }
};