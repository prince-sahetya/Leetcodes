class Solution {
public:
    int f(int i , int a , vector<int>&coins,vector<vector<int>>&dp){
        if(a==0) return 0 ;
       
    if(i==0){
        
         if (i == 0) {
            if (a % coins[0] == 0) return a / coins[0];
            else return 1e9; 
        }
    } 
    if(i<0) return 1e9;
    if(dp[i][a]!=-2) return dp[i][a];


    
    int pick = 1e9;

    if(coins[i] <= a ) pick = f(i,a - coins[i],coins,dp) + 1 ;
    int notpick = f(i-1,a,coins ,dp);
    return dp[i][a]=min(pick,notpick);




    }

    int coinChange(vector<int>& coins, int a) {
      
vector<vector<int>> dp(coins.size(), vector<int>(a + 1, -2));
        int ans =  f(coins.size()-1,a,coins,dp) ;
        if(ans>=1e9) return -1 ;
        return ans ; 
    }
};