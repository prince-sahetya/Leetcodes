class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return 1;
        auto it1 = max_element(nums.begin(),nums.end());
        int indx_max=it1 - nums.begin();
        auto it2 = min_element(nums.begin(),nums.end());
        int indx_min= it2 - nums.begin();
        int val1 = n - 1 -max(indx_max,indx_min) + min(indx_max,indx_min) + 2;
        
        int val2 = n -1 - min(indx_max,indx_min) +1;
        return min(val1,min(val2,max(indx_max,indx_min)+1)) ; 

    }
};