class Solution {
public:
    int findMin(vector<int>& nums) {
      int lo = 0, hi = nums.size()-1;
      while(hi-lo>1){
        int mid=(lo+hi)/2;
        if(nums[mid] > nums[hi]) lo=mid;
        else{
            hi=mid;

        }
      } 
      return min(nums[lo],nums[hi]); 
    }
};