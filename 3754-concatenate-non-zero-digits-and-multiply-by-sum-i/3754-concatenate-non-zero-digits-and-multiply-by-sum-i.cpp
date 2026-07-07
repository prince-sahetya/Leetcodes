class Solution {
public:
    long long sumAndMultiply(int n) {
      vector<int>digits;
      int num=n;
      while(num>0){
      int t=num%10;
      if(t!=0) digits.push_back(t);
      num/=10;



      }
      if(digits.empty()) return 0;
      else{
        long long x =0 ,sum=0;
        reverse(digits.begin(),digits.end());
        for(int i=0;i<digits.size();i++){
          x*=10 ;
          x+=digits[i];
          sum+=digits[i];

        }
        long long ans = (long long) sum*x;
        return ans ;






      } 
      return 0; 
    }
};