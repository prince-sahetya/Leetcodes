class Solution {
    private:
    void f(int index , int target , vector<int>& ds , vector<int>& candidates ,vector<vector<int>>& ans){
        int n=candidates.size();
        if(index==n){
            if(target==0){
                ans.push_back(ds);

            }
            return ;

        }
        if(candidates[index] <= target ){
            ds.push_back(candidates[index]);
            f(index,target-candidates[index],ds, candidates,ans);
            ds.pop_back();

        }
        f(index+1,target,ds, candidates,ans);

        

     }


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        
        f(0,target,ds,candidates,ans);
        return ans ;

    }
};