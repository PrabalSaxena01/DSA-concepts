class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<int> count ((n*n)+1,1);
        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                count[grid[i][j]]--;
            }
        }
        vector<int> result(2,0);
        for(int i= 1;i<(n*n)+1;i++){
            if(count[i]==-1){
                result[0]=i;
            }
            if(count[i]==1){
                 result[1]=i;
            }
        }
        return result;
    }
};