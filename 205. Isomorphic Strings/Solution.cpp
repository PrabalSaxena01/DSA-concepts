class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mappingS[128] = {0};
        bool mappedT[128] = {false};

        for (int i = 0; i < s.length(); i++) {
            int c1 = s[i];
            int c2 = t[i] ;

            if (mappingS[c1] == 0 && !mappedT[c2]) {
                mappingS[c1] = c2 + 1;  // Add 1 to distinguish from unassigned (0)
                mappedT[c2] = true;
            } else {
                if (mappingS[c1] != c2 + 1) return false;
            }
        }
        return true;
    }
};
