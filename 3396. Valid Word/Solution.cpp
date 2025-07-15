class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        bool num = false, cons = false, vowel = false;
        if (n < 3) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            if (word[i] >= 48 && word[i] <= 57) {
                num = true;
            } else if (word[i] == 'a' || word[i] == 'e' ||
                       word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
                       word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
                       word[i] == 'O' || word[i] == 'U') {
                vowel = true;
            } else if ((word[i] >= 65 && word[i] <= 90) ||
                       (word[i] >= 97 && word[i] <= 122)) {
                cons = true;
            } else {
                return false;
            }
        }
        if (vowel && cons) {
            return true;
        } else {
            return false;
        }
    }
};