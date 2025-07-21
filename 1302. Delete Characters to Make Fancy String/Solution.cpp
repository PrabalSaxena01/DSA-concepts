class Solution {
public:
    string makeFancyString(string s) {
        string result;
        result += s[0];
        if (s.size() > 1)
            result += s[1];
        for (int i = 2; i < s.size(); i++) {
            // Only add if not three in a row
            if (s[i] == result.back() && s[i] == result[result.size() - 2])
                continue;
            result += s[i];
        }
        return result;
    }
};
