class Solution {
public:
    int maxDifference(string s) {
        vector<int> l(26, 0);
        int a;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            a = s[i] - 'a';
            l[a]++;
        }
        int maxeven = 0, maxodd = 0, mineven = n + 1, minodd = n + 1;
        for (int i = 0; i < 26; i++) {
            if (l[i] == 0)
                continue;
            if (l[i] % 2 == 0) {
                maxeven = l[i] > maxeven ? l[i] : maxeven;
                mineven = l[i] < mineven ? l[i] : mineven;
            } else {
                maxodd = l[i] > maxodd ? l[i] : maxodd;
                minodd = l[i] < minodd ? l[i] : minodd;
            }
        }
           int res = max(maxodd-mineven,minodd-maxeven);
        return res;
    
    }
};