class Solution {
public:

    // what does f(i,j) represents ?
    // it represents the edit ops req to convert s1[0 t0 ith indx] to s2[0 t0 jth indx] ;
    // insert op => 1+f(i,j-1) 
    // delete op => 1 + f(i-1,j) 
    // replace op => 1+ f(i-1,j-1)



    // int f(int i , int j , string s1 , string s2 ,vector<vector<int>>&dp){
    //     if(i==0) return j;
    //     if(j==0) return i;
    //     if(dp[i][j]!=-1  ) return dp[i][j] ;
    //     if(s1[i-1]==s2[j-1]) return dp[i][j]= f(i-1,j-1,s1,s2,dp);
    //     return dp[i][j]= min(1+f(i,j-1,s1,s2,dp),min(1+f(i-1,j,s1,s2,dp),1+f(i-1,j-1,s1,s2,dp)));
    // }

    int minDistance(string s1, string s2) {
      vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1)) ;
     

      for(int i =0 ;i<=s1.size() ; i++ ) dp[i][0] = i ;
      for(int j =0 ;j<=s2.size() ; j++ ) dp[0][j] = j  ;
      for(int i=1;i<=s1.size();i++){
        for(int j =1;j<=s2.size();j++){
            if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = 1 + min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j])) ;

        }
      }

    return dp[s1.size()][s2.size()] ;

    }
};