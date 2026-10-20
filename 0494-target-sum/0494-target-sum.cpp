class Solution {
public:
    int f(int i , int target , vector<int>&nums){
        if(i==0){
          
            if(nums[0]==0 && target==0 ) return 2 ;
             else  if(nums[0]==target) return 1 ;
            else if(nums[0]+target == 0 ) return 1;
            else return 0 ;
        }

    int add = f(i-1,target-nums[i],nums);
    int sub = f(i-1,target+nums[i],nums);
    return add + sub ;

    }


    int findTargetSumWays(vector<int>& nums, int target) {
        return f(nums.size()-1,target,nums);
    }
};