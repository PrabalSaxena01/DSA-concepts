class Solution {
public:
    int c(int a) {
        int res = 0;
        while (a != 0) {
            res += (a % 10);
            a /= 10;
        }
        return res;
    }
    int countLargestGroup(int n) {
        vector<int> vec(37, 0);
        for (int i = 1; i <= n; i++) {
            vec[c(i)]++;
        }
        int res = *max_element(vec.begin(), vec.end());
        int count = 0;
        for(int num:vec){
            if(num==res){
                count++;
            }
        }
        return count;
    }
};