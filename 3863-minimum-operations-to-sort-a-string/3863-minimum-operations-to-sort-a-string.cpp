class Solution {
public:
    int minOperations(string s) {
        string check = s;
        int n = s.size();
        sort(check.begin(), check.end());
        
        if (s == check) return 0;
        
        auto mn = *min_element(s.begin(), s.end());
        auto mx = *max_element(s.begin(), s.end());
        
        if (mn == s[0] || mx == s[n - 1]) return 1;
        
        if (mx == s[0] && mn == s[n - 1]) {
            if (n == 2) return -1;
            
           
            string path1 = s;
            sort(path1.begin(), path1.begin() + n - 1);
            sort(path1.begin() + 1, path1.end());
            if (path1 == check) return 2;
            
           
            string path2 = s;
            sort(path2.begin() + 1, path2.end());
            sort(path2.begin(), path2.begin() + n - 1);
            if (path2 == check) return 2;
            
           
            return 3;
        }
        
        return 2;
    }
};