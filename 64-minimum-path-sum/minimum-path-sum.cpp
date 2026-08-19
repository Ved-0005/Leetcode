class Solution {
public:
    int m,n;
    int minpath(vector<vector<int>>& grid,int row,int col,vector<vector<int>>& dp){
         m=grid.size();
         n=grid[0].size();
        if(row==m-1&&col==n-1) return dp[row][col]= grid[row][col];
        if(dp[row][col]!=-1) return dp[row][col];
        if(row==m-1) return dp[row][col]= grid[row][col]+minpath(grid,row,col+1,dp);
        if(col==n-1) return dp[row][col]= grid[row][col]+minpath(grid,row+1,col,dp);
        int down=grid[row][col]+minpath(grid,row+1,col,dp);
        int right=grid[row][col]+minpath(grid,row,col+1,dp);
        return dp[row][col]= min(down,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return minpath(grid,0,0,dp);
    }
};