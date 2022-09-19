class Solution {
public:

int find(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
{
    
    if(i>=grid.size() || j>=grid[0].size()) return 1e9;
    
    if(i==grid.size()-1 && j==grid[0].size()-1)
    {
        return grid[i][j];
    }
    
    if(dp[i][j]!=-1) return dp[i][j];
    int right=grid[i][j]+find(i,j+1,grid,dp);
    int down=grid[i][j]+find(i+1,j,grid,dp);
    
    return dp[i][j]=min(down,right);
}

int minPathSum(vector<vector<int>>& grid) 
{
    vector<vector<int>>dp(grid.size()+1,vector<int>(grid[0].size()+1,-1));
    return find(0,0,grid,dp);
}
};