class Solution {
public:
    int f(int i , int j , int x ,  vector<vector<int>>& grid , vector<vector<vector<int>>>&dp){
        // if(i==0 && j==0) return grid[i][j];
        // if(dp[i][j]!=-1) return dp[i][j];
        // int a =1e9 ;
        // int b = 1e9 ;
        // if(i>0 && j>=0 )  a=f(i-1,j,grid,dp)^grid[i][j];
        // if(j>0 && i>=0 )  b=f(i,j-1,grid,dp)^grid[i][j];
        // return dp[i][j] =  min(a, b);
        if(i<0 || j<0)return 1e9;

        if(i==0 && j==0)return x^grid[0][0];
        if(dp[i][j][x]!=-1) return dp[i][j][x] ;
        int up=1e9,left=1e9;
        up=f(i-1,j,x^grid[i][j],grid,dp);
        left=f(i,j-1,x^grid[i][j],grid,dp);
        return dp[i][j][x]=min(up,left);

    }
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int xs = 1024 ;
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(xs,-1)));
        int ans=f(n-1,m-1,0,grid,dp);
        
        return ans;
    }
};