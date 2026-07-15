class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        ans[0]=0;
        for(int i=1;i<=n;i++){
            int cnt=0;
            int temp=i;
            
            while(temp>0){
                if(temp&1) cnt++;
                temp>>=1;
            }
            ans[i]=cnt;
        }
        return ans ;

    }
};