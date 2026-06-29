class Solution {
public:
    int reverse(int x) {
        long t,ans=0;
        while(x!=0){ ;
            t=x%10;
            ans = ans*10+t;
            x/=10;
        } 
        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }
        
         
       else{
        return ans;
       }
    }
};