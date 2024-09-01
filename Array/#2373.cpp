class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int nRows = grid.size();
        int nCols = grid[0].size();

        vector<vector<int>> ans;

        for(int i =0; i < nRows-2; i++){
            vector<int> temp;
            for(int j=0; j < nCols-2; j++){
                int v1 = max({grid[i][j], grid[i][j+1], grid[i][j+2]});
                int v2 = max({grid[i+1][j], grid[i+1][j+1], grid[i+1][j+2]});
                int v3 = max({grid[i+2][j], grid[i+2][j+1], grid[i+2][j+2]});
                int val = max({v1, v2, v3});
                temp.push_back(val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};