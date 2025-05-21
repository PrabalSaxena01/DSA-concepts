class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int   m = matrix.size();
       int  n = matrix[0].size();
       set<int> row;
       set<int> column;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row.insert(i);
                    column.insert(j);
                }
            }
        }

       for(int r:row){
        for(int j =0;j<n;j++){
            matrix[r][j]=0;
        }
       }
       for(int c:column){
        for(int j =0;j<m;j++){
            matrix[j][c]=0;
        }
       }
    }
};