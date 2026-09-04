class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>pf_max;
        vector<int>smin(nums.size());
        int maxm=-1;
        for(int i =0 ; i<nums.size();i++){
            maxm=max(maxm,nums[i]);
            pf_max.push_back(maxm);
            
        }
        int minm=1e9;
        for(int i=nums.size()-1;i>=0;i--){
            minm=min(minm,nums[i]);
            smin[i]=minm;
        }
        for(int i=0;i<nums.size();i++){
            if(pf_max[i]-smin[i] <=k ) return i;
        }
        return -1 ;

    }
};