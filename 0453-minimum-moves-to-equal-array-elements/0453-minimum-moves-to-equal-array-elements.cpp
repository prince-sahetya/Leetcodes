class Solution {
public:
    int minMoves(vector<int>& nums) {
        int s = nums.size() ;
        int sum =0;
        int mn = *min_element(nums.begin(),nums.end());
        for(int i=0;i<s;i++){
            sum += nums[i];
        }
        return sum - mn*s ;

       

    }
};