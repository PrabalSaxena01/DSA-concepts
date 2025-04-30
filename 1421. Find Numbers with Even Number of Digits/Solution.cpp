class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int a:nums){
            string s = to_string(a);
            if(s.length()%2==0) count++;
        }
        return count;
    }
};