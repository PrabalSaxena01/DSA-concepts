class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        string temp;
        int n = s.size();
        int j = n - 1;
        int k = 0;
        bool first = true;
        for (int j = n - 1; j >= 0; j--) {
            if (s[j] != ' ') {
                temp += s[j];
            } else if (temp != "") {
                reverse(temp.begin(), temp.end());
                if (first == true) {
                    result = result + temp;
                    first = false;
                    
                } else {
                    result =  result+ " " + temp;
                }
                // if (j == 0) {
                //     // reverse(temp.begin(), temp.end());
                //     result = " " +result + temp;
                //     temp = "";
                // }
                 temp = "";
            }
        }
         if (!temp.empty()) {
            reverse(temp.begin(), temp.end());
            if (first) {
                result += temp;
            } else {
                result += " " + temp;
            }
        }
        return result;
    }
};