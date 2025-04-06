class Solution {
public:
    string reverseWords(string s) {
          stringstream ss(s);
        string word, result;

        while (ss >> word) {               // Extracts words one by one
            if (!result.empty()) {
                result = word + " " + result;  // Add to the front of the result
            } else {
                result = word;                // First word, no space
            }
        }

        return result;
    }
};