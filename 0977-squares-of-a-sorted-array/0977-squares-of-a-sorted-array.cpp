class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        if(nums[left]*nums[right] >=0 && nums[left] >0){
          for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        return nums;
        }
        if(nums[left]*nums[right] >=0 && nums[left] <0){
            reverse(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        return nums;
        }
        vector<int>ans;
        while(left<=right){
            if(abs(nums[left]) > abs(nums[right])) {ans.push_back(nums[left]);
            left++;}
            else{
                ans.push_back(nums[right]);
                right--;
            }
        }
        for(int i=0;i<ans.size();i++){
            ans[i]*=ans[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};