class Solution {
public:
    int f(int indx, vector<int>&nums,vector<int>&dp){
        if(indx<0) return 0;
        if(dp[indx]!=-1) return dp[indx];
        return dp[indx]=max(f(indx-2,nums,dp) + nums[indx],f(indx-3,nums,dp) + nums[indx-1]);  
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        dp[0]=nums[0];
        if(nums.size()>=2)dp[1]=max(nums[0],nums[1]);
        int ans = max(f(nums.size()-1,nums,dp),f(nums.size()-2,nums,dp));
        for(auto it: dp) cout<<it<<" ";
        return ans;

        
    }
};