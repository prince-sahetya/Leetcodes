class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxm=0;
        int n=colors.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(colors[i]!=colors[j]){
                maxm=max(maxm,abs(j-i));}
            }
        }
        return maxm;
    }
};