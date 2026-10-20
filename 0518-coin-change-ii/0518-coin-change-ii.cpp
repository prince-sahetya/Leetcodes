class Solution {
public:
    // int f(int i , int a , vector<int>& coins, vector<vector<int>>&dp){
    //     if(i==0){
    //         if(a%coins[0]==0) return 1 ;
    //         else return 0 ;

    //     }
    //     if(dp[i][a]!=-1) return dp[i][a];

    //     int p = 0 ;
    //     if(coins[i] <= a  ) p = f(i,a-coins[i],coins,dp);
    //     int np = f(i-1,a,coins,dp);
    //     return dp[i][a] =  p+np ;


    // }



    int change(int a, vector<int>& coins) {
        vector<vector< unsigned int  >>dp(coins.size(),vector< unsigned int  >(a+1,-1));
        
    
        for(int i =0 ; i <=a ; i++){
           if(i%coins[0]==0) dp[0][i]= 1 ;
           else dp[0][i] = 0 ;
        }
        for(int i =1; i< coins.size() ; i++){
            for(int t = 0 ; t <= a ; t++){
                  unsigned int   p = 0 ;
        if(coins[i] <= t ) p = dp[i][t-coins[i]];
          unsigned int   np = dp[i-1][t] ;
           dp[i][t] =  p + np ;
            }
        }
        return dp[coins.size()-1][a] ;


    }
};