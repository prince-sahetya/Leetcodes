class Solution {
public:
bool f(int mid , int days , vector<int>& weights){
    int cnt =0;
    int sum =0;
    for(int i=0;i<weights.size();i++){
        sum+=weights[i];
        if(sum<=mid) continue;
        else{cnt++; sum=weights[i];}
    }
    if( (cnt+1) <=days) return true;
    return false;


}
    int shipWithinDays(vector<int>& weights, int days) {
        int lo =*max_element(weights.begin(),weights.end()), hi = accumulate(weights.begin(),weights.end(),0);
        while(hi-lo>1){
            int mid=(lo+hi)/2;
            if(f(mid,days,weights)) hi=mid;
            else{
                lo=mid+1;
            }
        }
        if(f(lo,days,weights)) return lo;
        return hi;
    }
};