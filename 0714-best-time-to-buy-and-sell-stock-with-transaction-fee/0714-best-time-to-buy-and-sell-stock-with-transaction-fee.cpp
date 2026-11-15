class Solution {
public:


 int f1(int i , int  buy , vector<int>& prices ,vector<vector<int>>&dp1){
        if(i>=prices.size()) return 0 ;
        int profit = 0;
        if(dp1[i][buy]!=-1) return dp1[i][buy];

        if(buy) {
            profit = max(-prices[i] + f1(i+1,0,prices,dp1), f1(i+1,1,prices ,dp1));


        }
        else{
            profit= max(prices[i] + f1(i+1,1,prices,dp1) , f1(i+1,0,prices,dp1)) ;
             
            
        }
        return dp1[i][buy]=profit ; 
    }
 int f(int i , int  buy ,int fee ,  vector<int>& prices,vector<vector<int>>&dp ){
        if(i>=prices.size()) return 0 ;
        if(fee == 0 ) return 0 ;
        int profit = 0;
        if(dp[i][buy]!=-1) return dp[i][buy];

        if(buy) {
            profit = max(-prices[i] + f(i+1,0,fee,prices,dp), f(i+1,1,fee,prices,dp));


        }
        else{
            profit= max(prices[i] + f(i+1,1,fee,prices,dp) - fee  , f(i+1,0,fee,prices,dp)) ;
             
            
        }
        return dp[i][buy]=profit ; 
    }
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        vector<vector<int>>dp1(prices.size(),vector<int>(2,-1));
    if(fee==0) return f1(0,1,prices,dp1) ;
        else return f(0,1,fee ,prices,dp) ;
    }
};