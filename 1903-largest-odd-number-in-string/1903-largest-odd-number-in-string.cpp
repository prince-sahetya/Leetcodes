class Solution {
public:
    string largestOddNumber(string num) {
        int index=-1;
        for(int i=num.size()-1;i>=0;i--){
        int n = num[i] - '0';
        if(n&1) { index=i; break;}
        }
       if(index!=-1) {num.erase(num.begin()+index+1,num.end());
        return num ;}
        return "" ;
    }
};