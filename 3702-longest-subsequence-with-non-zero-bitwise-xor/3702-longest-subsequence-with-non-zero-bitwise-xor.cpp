class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
       int bit=0;
       int cnt=0;
       for(int i=0;i<nums.size();i++){
        bit^=nums[i];
        if(nums[i]==0) cnt++;
       }
       if(cnt==nums.size()) return 0 ;
        if(bit!=0) return nums.size();
        return nums.size()-1; 

    }
};