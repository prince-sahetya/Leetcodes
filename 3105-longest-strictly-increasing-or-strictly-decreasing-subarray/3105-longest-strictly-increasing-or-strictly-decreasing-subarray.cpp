class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int l1 =1 , l2 = 1 ;
        int ml1 =1,ml2=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){ l1++;  ml1=max(ml1,l1) ;}
            else l1=1;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) {l2++; ml2 = max(ml2,l2) ; }
            else l2=1;
        }
        return max(ml1,ml2) ;
    }
};