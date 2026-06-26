class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>row1;
        row1.push_back(1);
        ans.push_back(row1);
        if(numRows==1) { 
        return ans;}
        
         vector<int>row2;
         row2.push_back(1);
         row2.push_back(1);
         ans.push_back(row2);
        for(int i=2;i<numRows;i++){
            vector<int>currnt_row;
            currnt_row.push_back(1);
            for(int j=1;j<i;j++){
                currnt_row.push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
            currnt_row.push_back(1);
            ans.push_back(currnt_row);

        }
        
    return ans;
    }
};