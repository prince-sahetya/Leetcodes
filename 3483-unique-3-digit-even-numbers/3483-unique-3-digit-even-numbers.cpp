class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int cnt =0 ;
        set<int>st;
        int n= digits.size();
        for(int i =0 ; i < n ; i++ ){
            if(digits[i]&1) continue;
            for(int j =0 ; j < n ; j++){
                if( i==j ) continue;
                for(int k =0 ; k < n ; k++){
                    if(digits[k]==0 || k==j || k==i ) continue;
                    st.insert(digits[i] + 10*digits[j] + 100*digits[k]);
                }
            }
        }
        return st.size() ;
    }
};