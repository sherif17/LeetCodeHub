class Solution {
public:
     int area(vector<vector<int>> &grid, int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || !grid[i][j]) return 0;
        grid[i][j]=0;
        return 1+ area(grid,i+1,j) +area(grid,i-1,j) +area(grid,i,j+1) +area(grid,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
              if(grid[i][j])
                  ans=max(ans,area(grid,i,j)); 
    return ans;
        
    }
};