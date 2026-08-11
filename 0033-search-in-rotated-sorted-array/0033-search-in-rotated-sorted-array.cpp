class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0, hi=nums.size()-1;
        int indx=-1;
        while(hi- lo >1){
            int mid=(lo+hi)/2;
            if(nums[mid] > nums[hi]) lo= mid;
            else{
                hi=mid;
            }
        }
       indx=lo;
       

       
       
       
       int low = 0 , high = indx;
       while(high - low > 1){
        int mid= (low+high)/2;
        if(nums[mid]>=target ) high=mid;
        else{
            low=mid+1;
        }
       }
       if(nums[low] == target ) return low;
       if(nums[high]== target) return high;

       low = indx+1, high = nums.size()-1;
       while(high - low > 1){
        int mid= (low+high)/2;
        if(nums[mid] >= target ) high=mid;
        else{
            low=mid+1;
        }
       }
       if(low < nums.size() && nums[low] == target) return low;
       if(high >=0 && high < nums.size() &&    nums[high]== target ) return high;

 return -1;

    }
};