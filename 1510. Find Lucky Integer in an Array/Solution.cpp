class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        vector<int> track(n+1,0);
        for(int i=0;i<n;i++){
            if(arr[i]<=n)
            track[arr[i]]++;
        }
         for(int i=n;i>0;i--){
            if(i==track[i]){
                return i;
            }
        }
        return -1;
    }
};