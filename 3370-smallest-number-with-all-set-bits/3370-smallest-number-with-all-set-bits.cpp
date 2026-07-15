class Solution {
public:
    int smallestNumber(int n) {
        int ans ;
        for(int i=0 ;i<31;i++){
            if(n < (1<<i) ) { ans= (1<<i) -1 ; break;}
            
        }
        return ans ;
    }
};