class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> seen;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (seen.count(board[i][j]))
                        return false;
                    seen.insert(board[i][j]);
                }
            }
        }

        for (int j = 0; j < 9; j++) {
            unordered_set<char> colSeen;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    if (colSeen.count(board[i][j]))
                        return false;
                    colSeen.insert(board[i][j]);
                }
            }
        }

        for (int box = 0; box < 9; box++) {
            unordered_set<char> boxSeen;
            int boxRowStart = 3 * (box / 3);
            int boxColStart = 3 * (box % 3);

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char val = board[boxRowStart + i][boxColStart + j];
                    if (val != '.') {
                        if (boxSeen.count(val))
                            return false;
                        boxSeen.insert(val);
                    }
                }
            }
        }
        return true;
    }
};