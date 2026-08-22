class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum=0;
        int m = n ;
        long long prod=1;
        while(m>0){
            digitsum+=(m%10);
            prod*=1LL*(m%10);
            m/=10;

        }
        long long val = 1LL*digitsum + prod ;
        return ((1LL*n)%val==0);

    }
};