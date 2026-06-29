class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
       int lo=1,hi=x;
       while(hi-lo>1){
        int mid = (lo) + (hi-lo)/2;
        if(mid <= x/mid) lo=mid;
        else{
            hi=mid-1;
        }
       }
       if(hi<=x/hi) return hi;
       return lo;
    }
};