class Solution {
public:
    bool f(int n , int threshold , vector<int>& nums){
        int val=0;
        for(int i=0;i<nums.size();i++){
            val+=(nums[i]+n-1)/n;

        }
        if(val<=threshold) return true;
        return false;

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1, hi= 1e6;
        while(hi-lo>1){
            int mid = (lo+hi)/2;
            if(f(mid,threshold,nums)) hi=mid;
            else{
                lo=mid+1;
            }
        }
        if(f(lo,threshold,nums)) return lo;
        return hi ;

    }
};