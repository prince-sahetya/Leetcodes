class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            int val=s[i];
            if(val>=65 && val<=90) val+=32;
            if(val>=97 && val<=122) { s[i]=val;
                ans.push_back(s[i]);}
                if(val>=48 && val<=57) { s[i]=val;
                ans.push_back(s[i]);}
        }
        if(ans.size()==0) return true;
        string rev= ans;
        reverse(rev.begin(),rev.end());
        if(rev==ans) return true;
        return false;
    }
};