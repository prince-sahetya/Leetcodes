class Solution {
public:
    bool canAliceWin(int n) {
        int j =10;
        int z = 1;
      for(int i = 0 ;i < 10 ; i++){
        if(n-j >= 0) {n=n-j ; j--; z=z*(-1); }
        else if (n-j<0 && z==-1) return true ;
        else return false ;

      }
      
return false ;
        
    }
};