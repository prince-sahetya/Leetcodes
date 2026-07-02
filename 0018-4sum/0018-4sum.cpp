class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>st;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            { set<int>hst;
                for(int k=j+1;k<nums.size();k++)
                {
                    
                   long long exact_frth = (long long)target - nums[i] - nums[j] - nums[k]; 
                    
                    
                    if (exact_frth >= INT_MIN && exact_frth <= INT_MAX) {
                        int frth = exact_frth;
                    if(hst.find(frth)!=hst.end())
                    {
                        vector<int>row={nums[i],nums[j],nums[k],frth};
                        sort(row.begin(),row.end());
                        st.insert(row);



                    }
                    hst.insert(nums[k]);
                    }

                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;


    }
};