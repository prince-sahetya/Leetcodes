class Solution {
public:
    int maxProduct(int n) {
      vector<int>digits;
        while(n>0){
            int t=n%10;
            if(t!=0) digits.push_back(t);
            n/=10;
        }
        sort(digits.begin(),digits.end());
        if(digits.size()==1 || digits.size()==0) return 0;
        int m = digits.size();
        return digits[m-1]*digits[m-2];
    }
};