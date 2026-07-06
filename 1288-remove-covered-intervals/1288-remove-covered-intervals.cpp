class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<int>ans(intervals.size());
        for(int i=0;i<intervals.size();i++){
            for(int j=0;j<intervals.size();j++){
                if(j!=i){
                    if(intervals[j][0]>= intervals[i][0] && intervals[j][1] <= intervals[i][1]  ){
                        ans[j]=-1;
                    }

                }
            }

        }
       int cnt = 0;
       for(int i=0;i<ans.size();i++){
        if(ans[i]==0) cnt++;
       }
       return cnt;

    }
};