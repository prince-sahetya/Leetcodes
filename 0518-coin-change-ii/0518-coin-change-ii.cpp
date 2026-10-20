class Solution {
public:
    int f(int i , int a , vector<int>& coins, vector<vector<int>>&dp){
        if(i==0){
            if(a%coins[0]==0) return 1 ;
            else return 0 ;

        }
        if(dp[i][a]!=-1) return dp[i][a];

        int p = 0 ;
        if(coins[i] <= a  ) p = f(i,a-coins[i],coins,dp);
        int np = f(i-1,a,coins,dp);
        return dp[i][a] =  p+np ;


    }



    int change(int a, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(a+1,-1));
        return f(coins.size()-1,a,coins,dp);
    }
};