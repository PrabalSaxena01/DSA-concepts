class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int a:nums){
            int n = 0;
            while(a>0){
                a/=10;
                n++;
            }
            if(n%2==0) count++;
        }
        return count;
    }
};