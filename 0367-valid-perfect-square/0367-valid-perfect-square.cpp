class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int lo=1,hi=num;
        while(hi-lo>1){
            int mid=lo + (hi-lo)/2;
            if(mid<num/mid) lo=mid;
            else{
                hi=mid;
            }
        }
        if((long long)hi*hi==num) return true;
        else if((long long )lo*lo==num) return true;
        return false;
        
       
        

    }
};