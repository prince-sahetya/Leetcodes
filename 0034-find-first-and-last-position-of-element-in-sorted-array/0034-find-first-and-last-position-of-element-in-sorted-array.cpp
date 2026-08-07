class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    auto s= lower_bound(nums.begin(),nums.end(),target);
    auto k= upper_bound(nums.begin(),nums.end(),target);
    int indx1= s - nums.begin();
    int indx2 = k- nums.begin()-1;
    vector<int>ans;

    if(indx1 == nums.size() || nums[indx1] != target) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
    else{
        ans.push_back(indx1);
        ans.push_back(indx2);
        return ans ;

    }
    return ans ;
    }
};