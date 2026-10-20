class Solution {
public:
    // int f(int i , int a , vector<int>&coins,vector<vector<int>>&dp){
    //     if(a==0) return 0 ;
       
    // if(i==0){
        
    //      if (i == 0) {
    //         if (a % coins[0] == 0) return a / coins[0];
    //         else return 1e9; 
    //     }
    // } 
    // if(i<0) return 1e9;
    // if(dp[i][a]!=-2) return dp[i][a];


    
    // int pick = 1e9;

    // if(coins[i] <= a ) pick = f(i,a - coins[i],coins,dp) + 1 ;
    // int notpick = f(i-1,a,coins ,dp);
    // return dp[i][a]=min(pick,notpick);




    // }

    int coinChange(vector<int>& coins, int a) {
      
vector<vector<int>> dp(coins.size(), vector<int>(a + 1, -2));
      
    for(int i=0 ; i <= a ; i++){
        if(i%coins[0] == 0 ) dp[0][i]= i/coins[0];
        else dp[0][i]=1e9;
    }
    for(int i = 1 ; i < coins.size() ; i++){
        for(int t = 0 ; t <= a ; t++){
             int pick = 1e9;

        if(coins[i] <= t ) pick = dp[i][t-coins[i]] + 1 ;
       int notpick = dp[i-1][t];
        dp[i][t]=min(pick,notpick);
        }
    }
    if(dp[coins.size()-1][a] >= 1e9 ) return -1;
    return dp[coins.size()-1][a]; 




    }
};