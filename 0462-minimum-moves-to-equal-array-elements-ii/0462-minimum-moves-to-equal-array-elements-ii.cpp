class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int s= nums.size();
       int reff = nums[s/2];
       int ans = 0;
       for(int i=0;i<s;i++){
        ans+=abs(nums[i]-reff);

       }
    return ans ;
    
        
    }
};