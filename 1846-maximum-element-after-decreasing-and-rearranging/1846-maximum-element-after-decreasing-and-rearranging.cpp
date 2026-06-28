class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        int val=1;
        for(int i=1;i<arr.size();i++){
         val =  arr[i-1];
         if(arr[i] == val  ) continue;
        else{
            arr[i] = val+1;
        }

        }
        return arr[arr.size()-1];
    }
};