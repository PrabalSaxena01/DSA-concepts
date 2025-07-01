class Solution {
public:
    int possibleStringCount(string word) {
        int unique = 0;
        int total = word.size();
        for(int i = 1;i<total;i++){
            if(word[i]!=word[i-1]){
                unique++;
            }
        }
        return total - unique ;
    }
};