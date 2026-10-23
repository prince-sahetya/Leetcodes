class Solution {
public:
    // int f(int i , int j , string &s ,string &t){
    //     if(i<0 || j < 0) return 0 ;
    //     if(s[i]==t[j]) return 1 + f(i-1,j-1,s,t);
    //     else return max(f(i-1,j,s,t),f(i,j-1,s,t));


       
    // }
    int longestPalindromeSubseq(string s) {
        string t = s ;
        reverse(s.begin(),s.end());

        vector<vector<int>>dp(s.size()+1,vector<int>(t.size()+1,-1));
        


        for(int i=0;i<=s.size();i++) dp[i][0]=0;
        for(int j=0;j<=t.size();j++) dp[0][j]=0;
        for(int i=1;i<=s.size();i++){
            for(int j=1;j<=t.size();j++){
                 if(s[i-1]==t[j-1])  dp[i][j]= 1 + dp[i-1][j-1] ;
                 else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[s.size()][t.size()] ;
    }
};