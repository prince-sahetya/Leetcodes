class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minm=10000;
        int maxm=0;
        for(int i=0;i<nums.size();i++){
            minm=min(minm,nums[i]);
            maxm=max(maxm,nums[i]);
        }
        return gcd(maxm,minm);
    }
};