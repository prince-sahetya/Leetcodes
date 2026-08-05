class Solution {
public:
vector<int>dp;
    int ans(int num ){
        if(num==0) return 0;
        if(num==1 || num==2) return 1;
        if(dp[num]!=-1) return dp[num];
        return dp[num]=ans(num-1)+ans(num-2)+ans(num-3) ;
        
    }

    int tribonacci(int n) {
        dp.resize(38,-1);
        return ans(n);
        
    }
};