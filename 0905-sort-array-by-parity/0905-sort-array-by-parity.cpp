class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                    
                
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]%2==0){
                    swap(nums[i],nums[j]);
                }
                
            }
            }
            else{
                continue;
            }
        }
        return nums;
    }
};