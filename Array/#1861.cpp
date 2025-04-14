class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& grid) {

        for(int i = 0; i<grid.size(); i++)
        {
            for(int j = grid[0].size()-1; j>0; j--)
            {
                if(grid[i][j] == '.')
                {
                    for(int k = j-1; k>=0; k--)
                    {
                        if(grid[i][k] == '.')
                            continue;

                        if(grid[i][k] == '*')
                            break;

                        if(grid[i][k] == '#')
                            swap(grid[i][k], grid[i][j]);
                    }
                }
            }
        }

        int row = grid[0].size();
        int col = grid.size();

        vector<vector<char>> box(row, vector<char>(col));

        for(int i = 0; i< row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                box[i][j] = grid[j][i];
            }
        }

        for(int i = 0; i< row; i++)
        {
               reverse(box[i].begin(), box[i].end());
        }
        
        return box;
    }
};