class Solution {
public:

    // what does f(i,j) represents ?
    // it represents the edit ops req to convert s1[0 t0 ith indx] to s2[0 t0 jth indx] ;
    // insert op => 1+f(i,j-1) 
    // delete op => 1 + f(i-1,j) 
    // replace op => 1+ f(i-1,j-1)



    int f(int i , int j , string s1 , string s2 ,vector<vector<int>>&dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
    if(dp[i][j]!=-1) return dp[i][j] ;
        if(s1[i]==s2[j]) return dp[i][j]= f(i-1,j-1,s1,s2,dp);




        return dp[i][j]= min(1+f(i,j-1,s1,s2,dp),min(1+f(i-1,j,s1,s2,dp),1+f(i-1,j-1,s1,s2,dp)));

    }

    int minDistance(string s1, string s2) {
      vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1)) ;
      return f(s1.size()-1,s2.size()-1,s1,s2 ,dp) ; 


    }
};