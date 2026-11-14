class Solution {
public:
 int f(int i , int buy , int t , int k , vector<int>&prices , vector<vector<vector<int>>>&dp){
     if( t==k  )return 0 ;
     if(i>=prices.size() ) return 0 ;
     if(dp[i][buy][t]!=-1) return dp[i][buy][t] ;



        int profit = 0;
    if(buy){
        profit = max(-prices[i] + f(i+1,0,t,k,prices,dp) , f(i+1,1,t,k,prices,dp)) ;
    }
    else{
        profit = max(prices[i] + f(i+1,1,t+1,k,prices,dp) , f(i+1,0,t,k,prices,dp)) ; 
    }
    return dp[i][buy][t] = profit ; 


    }
    int maxProfit(int k, vector<int>& prices) {
                vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(0,1,0,k,prices,dp ) ;
    }
};