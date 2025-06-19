class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int n = nums.size();

        int i =0;
        int j = 0;
        int count = 1;
     while(i<n && j<n){
        if(nums[j]-nums[i]<=k) j++;
        else{
            i = j;
            count++;
        }
     }
    return count;
    }
};