class Solution {
public:
    int getLiveNeighbours(vector<vector<int>>&curr, int i, int j, int m, int n){
        int liveN = 0;
        if(i>0){
            //neighbour above
            if(curr[i-1][j] == 1 || curr[i-1][j] == 3) liveN++;
        }
        if(i<m-1){
            //neighbour below
            if(curr[i+1][j] == 1 || curr[i+1][j] == 3) liveN++;
        }
        if(j>0){
            //left neighbour
            if(curr[i][j-1] == 1 || curr[i][j-1] == 3) liveN++;
        }
        if(j<n-1){
            //right neighbour
            if(curr[i][j+1] == 1 || curr[i][j+1] == 3) liveN++;
        }
        if(i>0 && j>0){
            //diagonally up and left
            if(curr[i-1][j-1] == 1 || curr[i-1][j-1] == 3) liveN++;
        }
        if(i>0 && j<n-1){
            //diagonally up and right
            if(curr[i-1][j+1] == 1 || curr[i-1][j+1] == 3) liveN++;
        }
        if(i<m-1 && j>0){
            //diagonally below and left
            if(curr[i+1][j-1] == 1 || curr[i+1][j-1] == 3) liveN++;
        }
        if(i<m-1 && j<n-1){
            //diagonally below and right
            if(curr[i+1][j+1] == 1 || curr[i+1][j+1] == 3) liveN++;
        } 
        return liveN;       
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int ln = getLiveNeighbours(board, i, j, m, n);
                if(board[i][j] == 0){
                    if(ln == 3) board[i][j] = 2; //newly alive
                }
                else if(board[i][j] == 1){
                    if(ln < 2 || ln > 3){
                        board[i][j] = 3; // newly dead
                    }
                }
            }
        }
        for(int i = 0; i< m; i++){
            for(int j = 0; j<n; j++){
                if(board[i][j] == 2) board[i][j] = 1;
                else if(board[i][j] == 3) board[i][j] = 0;
            }
        }
    }
};