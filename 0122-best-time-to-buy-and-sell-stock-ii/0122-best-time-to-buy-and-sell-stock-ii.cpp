class Solution {
public:
    // int f(int i , int  buy , vector<int>& prices ,vector<vector<int>>&dp){
    //     if(i>=prices.size()) return 0 ;
    //     int profit = 0;
    //     if(dp[i][buy]!=-1) return dp[i][buy];

    //     if(buy) {
    //         profit = max(-prices[i] + f(i+1,0,prices,dp), f(i+1,1,prices ,dp));


    //     }
    //     else{
    //         profit= max(prices[i] + f(i+1,1,prices,dp) , f(i+1,0,prices,dp)) ;
             
            
    //     }
    //     return dp[i][buy]=profit ; 
    // }

    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        vector<int>aage(2,0) ;
        vector<int>curr(2,0);
        


        for(int i = n-1;i>=0;i--){
            for(int buy = 0 ;buy<=1 ; buy++){
                int profit = 0 ;

                 if(buy) {
            profit = max(-prices[i] + aage[0] , aage[1]);


        }
        else{
            profit= max(prices[i] + aage[1] , aage[0])  ;
             
            
        }
         curr[buy]=profit ; 
         aage = curr ;

            }
        }
         return aage[1]  ; 
        
    }
};