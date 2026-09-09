class Solution {
public:
    

    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
       
        if(sum&1) return false ;
         int n = nums.size();
        vector<vector<bool>>dp(nums.size(),vector<bool>((sum/2)+1,false));
        for(int i =0;i<n;i++){
            dp[i][0]=true;
        }
        
        for(int i = 1;i<n;i++){
            for(int target =1 ; target < sum/2+1 ; target++){
               bool take = false ;
        bool nottake = dp[i-1][target];
        if(nums[i] <= target ) take = dp[i-1][ target - nums[i]] ;
            dp[i][target] =  take | nottake ;
            }
        }
        return dp[nums.size()-1][sum/2];



    }
};