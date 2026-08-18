class Solution {
public:
bool f(int sum , int k, vector<int>& nums){
    int cnt=1;
    int x=0;
    for(int i=0;i<nums.size();i++){
       if(x + nums[i] <= sum ){ x+=nums[i] ; }
       else{
        cnt++;
        x=nums[i];
       } 

    }
    if(cnt <= k) return true;
    return false;
}

    int splitArray(vector<int>& nums, int k) {
       int lo=*max_element(nums.begin(),nums.end()),hi=accumulate(nums.begin(),nums.end(),0);
       while(hi-lo>1){
        int mid=lo+(hi-lo)/2;
        if(f(mid,k,nums) ){
            hi=mid;
        }
        else{
            lo=mid+1;
        }

       }
       if(f(lo,k,nums)) return lo;
       return hi ;
    }
};