class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> Row;
        unordered_set<char> Column;
        unordered_set<char> Grid;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if ((board[i][j]) != '.') {
                    if ((Row.find(board[i][j]) != Row.end()))
                        return false;
                    Row.insert(board[i][j]);
                }
            }
            Row.clear();
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if ((board[j][i]) != '.') {
                    if ((Column.find(board[j][i]) != Column.end()))
                        return false;
                    Column.insert(board[j][i]);
                }
            }
            Column.clear();
        }
        for (int l = 0; l < 3; l++) {
            for (int k = 0; k < 3; k++) {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char val = board[i + 3 * l][j + 3 * k];
                        if (val != '.') {

                            if ((Grid.find(val) != Grid.end()))
                                return false;
                            Grid.insert(val);
                        }
                    }
                }
                Grid.clear();
            }
        }
        return true;
    }
};