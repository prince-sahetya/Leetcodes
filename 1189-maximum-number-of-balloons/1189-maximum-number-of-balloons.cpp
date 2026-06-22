class Solution {
public:
    int maxNumberOfBalloons(string text) {
       int cnta=0,cntb=0,cnto=0,cntl=0,cntn=0;
       for(int i=0;i<text.size();i++){
        if(text[i]=='a') cnta++;
        if(text[i]=='b') cntb++;
        if(text[i]=='o') cnto++;
        if(text[i]=='l') cntl++;
        if(text[i]=='n') cntn++;
       }
       int min1=min(cnta,min(cntb,cntn));
       int min2=min(cnto,cntl);
       int min3=min(min1,min2);
      if(min3==min2) return min2/2;
      else if(min3==min1 && min2>=2*min1 ) return min1;
      else {return min2/2;}
    }
};