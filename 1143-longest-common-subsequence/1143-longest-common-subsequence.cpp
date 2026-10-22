class Solution {
public:
    // int f(int i , int j , string &s1 , string &s2 ,vector<vector<int>>&dp){
    //     if(i==0 || j == 0 ) return 0;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     if(s1[i-1]==s2[j-1]) return dp[i][j]= 1 +f(i-1,j-1,s1,s2,dp);

    //     return dp[i][j]=max(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp));



        


    // }


    int longestCommonSubsequence(string s1, string s2) {
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        


        for(int i=0;i<=s1.size();i++) dp[i][0]=0;
        for(int j=0;j<=s2.size();j++) dp[0][j]=0;
        for(int i=1;i<=s1.size();i++){
            for(int j=1;j<=s2.size();j++){
                 if(s1[i-1]==s2[j-1])  dp[i][j]= 1 + dp[i-1][j-1] ;
                 else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[s1.size()][s2.size()] ;

    }
};