class Solution {
public:
    int subtractProductAndSum(int n) {
       int t,sum_digits=0,product_digits=1;
       while(n >0){
        t=n%10;
        sum_digits=sum_digits+t;
        product_digits=product_digits*t;
        n=n/10;
       }
       return product_digits - sum_digits ;

  
    }      
    
};