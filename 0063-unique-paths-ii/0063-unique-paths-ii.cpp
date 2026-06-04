class Solution {
public:
    int n,m;
    vector<vector<int>> dp;
    int f(vector<vector<int>>&dp,vector<vector<int>>&grid,int i,int j){
        if(i==n-1 && j==m-1) return 1;
        if(i<0 or j<0 or i>=n or j>=m) return 0;
        if(grid[i][j]==1) return 0;
        if(dp[i][j]!= -1 ) return dp[i][j];
        return dp[i][j]= f(dp,grid,i,j+1)+f(dp,grid,i+1,j);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        n = obstacleGrid.size();
        m = obstacleGrid[0].size();
        dp.clear();
        dp.resize(100,vector<int>(100,-1));
        if(obstacleGrid[n-1][m-1]==1) return 0;
        return f(dp,obstacleGrid,0,0);
    }
};