class Solution {
public:
    int mirrorDistance(int n) {
        
            int ans=0,m=n;
            while(m>0){
            int t=m%10;
            ans=ans*10 + t;
            m/=10;
            }
            
        
        return (abs(n-ans));

        
    }
};