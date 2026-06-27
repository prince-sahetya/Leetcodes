class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<long long  , long long  >mpp;
        for(int i=0;i<nums.size();i++){
           mpp[(long long )nums[i]]++;
        }
        int cnt=0,ans1=1,ans2=0;
        if(mpp.find(1)!=mpp.end()){
            long long ones=mpp[1];
            if(ones%2==0) {
                ans1=max(ans1,(int)ones -1);
            }
            else{
                ans1=max(ans1,(int)ones);
            }
         }
        for( auto x:mpp){
            if(x.first==1) continue;
            bool poss = true;
            long long currnt_val=x.first;
            while(poss){
            if(mpp.find(currnt_val*currnt_val)!=mpp.end()  && mpp[currnt_val]>=2) {cnt+=2;
            currnt_val= currnt_val*currnt_val;
            ans2=max(ans2,cnt);}
            
            else{
                cnt=0;
                poss=false;
            }

            }
        }
        if(ans1>ans2) return ans1;
        return ans2+1;
        
        
    }
};