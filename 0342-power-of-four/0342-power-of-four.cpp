class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        for(int i=2;i<=32 ;i+=2){
            if((1LL<<i)==n) return true;
        }
        return false;
    }
};