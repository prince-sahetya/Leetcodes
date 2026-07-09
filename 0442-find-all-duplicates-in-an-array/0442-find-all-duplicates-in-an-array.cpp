class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>ans;
        for(auto &x:mpp){
            if(x.second==2) ans.push_back(x.first);
        }
        return ans;
    }
};