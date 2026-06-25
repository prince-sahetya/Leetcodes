class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int up=0,down=0;
        while(up<nums1.size() && down<nums2.size()){
            if(nums1[up]==nums2[down]) return nums1[up];
            else if(nums1[up]>nums2[down]) down++;
            else{
                up++;
            }
           
        }
        return -1;
    }
};