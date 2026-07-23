class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>subsets;
        int n = nums.size();
        int cnt = 1<<n;
        for(int mask=0;mask<cnt;mask++){
            vector<int>el_subset;
            for(int i=0;i<n;i++){
                if((mask & (1<<i))!=0) el_subset.push_back(nums[i]);
                
            }
            subsets.push_back(el_subset);

        }
        return subsets;
    }
};