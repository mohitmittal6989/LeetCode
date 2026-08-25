class Solution {
public:

    void is(vector<vector<char>> &grid, int i, int j){
       int n = grid.size(), m = grid[0].size();

        if(i<0 || i==n || j<0 || j==m  || grid[i][j] == '0'){
            return;
        }

        grid[i][j] = '0';

        is(grid, i+1, j);
        is(grid, i-1, j);
        is(grid, i, j+1);
        is(grid, i, j-1);


    }

    int numIslands(vector<vector<char>>& grid) {
       int n = grid.size(), m = grid[0].size();

       int islands = 0;

       for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == '1'){
                islands++;
                is(grid, i, j);

            }
        }
       } 
       return islands;
    }


};