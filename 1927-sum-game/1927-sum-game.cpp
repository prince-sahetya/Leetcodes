class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int lhs=0,rhs=0,lhq=0,rhq=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?') lhq++;
            else{
                lhs += (int)(num[i]-'0');

            }
        }
        for(int i=n/2;i<n;i++){
            if(num[i]=='?')rhq++;
            else{
               rhs += (int)(num[i]-'0');
                
            }
        }
        if((lhq+rhq)&1) return true;
        if(lhs==rhs){
            if(lhq==rhq) return false;
            return true;
        }
        if(lhs>rhs){
        while(lhq!=0 || rhq!=0) {
            if(lhq>0) {lhs+=9; lhq--;}
            else { rhq--;}
            if(rhq==0) continue;
            rhs+=9;
            rhq--;
        }
        if(lhs==rhs) return false;
        return true;
        }
        else{
            while(lhq!=0 || rhq!=0) {
            if(rhq>0) {rhs+=9; rhq--;}
            else { lhq--;}
            if(lhq==0) continue;
            lhs+=9;
            lhq--;

        }
        if(lhs==rhs) return false ;
        return true;


        }
        return false;
    }
};