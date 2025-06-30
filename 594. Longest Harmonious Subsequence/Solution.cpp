class Solution {
public:
    int findLHS(vector<int>& nums) {
        int size = 0;
        int m_size = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        while (j < n) {
            if (nums[j] - nums[i] == 1) {
                size = j- i +1;
                m_size =  max(m_size,size);
                j++;
            } else if(nums[j] - nums[i] == 0 ){
                j++;
            }
            else {
                i++;
            }
     
        }
        return m_size;
    }
};