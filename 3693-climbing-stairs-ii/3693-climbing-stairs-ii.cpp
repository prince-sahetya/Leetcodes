class Solution {
public:
    int f(int i ,int n , vector<int>& costs,vector<int>&dp){
        if(i==2) return costs[2] + min(4,costs[1] + 2  )   ;
        if(i==1) return costs[1] + 1   ;
        if(i==0) return  0    ; 
        if(dp[i]!=-1) return dp[i];
        return  dp[i]=costs[i]+ min(f(i-1,n,costs,dp)+1 ,min(f(i-2,n,costs,dp)+4,f(i-3,n,costs,dp)+9 )) ;
    }
    int climbStairs(int n, vector<int>& c) {
        vector<int> costs(n+1);costs[0]=0;
        vector<int>dp(n+1,-1);
        for(int i=1;i<=n;i++)costs[i]=c[i-1];
        return f(n,n+1,costs,dp) ; 
    }
};