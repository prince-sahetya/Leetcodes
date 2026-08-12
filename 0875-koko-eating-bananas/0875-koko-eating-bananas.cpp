class Solution {
public:
    bool f(long long  n , long long  h , vector<int>& nums){
        long long  total_hrs=0;
        for(int i=0;i<nums.size();i++){
            total_hrs+=(1LL*nums[i]+n-1)/n ;

        }
        if(total_hrs<=h) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long  lo=1 , hi=1e18;
        while(hi-lo>1){
            long long  mid=lo+(hi-lo)/2;
            if(f(mid,1LL*h,piles)) hi=mid;
            else{
                lo=mid+1;

            }

        } 
        if(f(lo,h,piles)) return (int)lo ;
        return (int)hi;
    }
};