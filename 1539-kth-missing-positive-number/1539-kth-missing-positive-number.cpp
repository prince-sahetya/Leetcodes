class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>missing;
        for(int i=0;i<2500;i++){
            missing.push_back(i+1);
        }
        for(int i=0;i<arr.size();i++){
            missing.erase(missing.begin()+(arr[i]-1-i));
        }
        return missing[k-1];
    }
};