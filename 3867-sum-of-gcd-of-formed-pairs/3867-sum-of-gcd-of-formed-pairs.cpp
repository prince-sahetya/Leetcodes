class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixgcd(nums.size());
        vector<int>maxm(nums.size());
        maxm[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>maxm[i-1]) maxm[i]=nums[i];
            else{
                maxm[i]=maxm[i-1];

            }
        }

       for(int i=0;i<nums.size();i++){
            prefixgcd[i]=gcd(maxm[i],nums[i]);
            
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        long long  sum=0;
        for(int i=0;i<nums.size()/2;i++){
            sum+=gcd(prefixgcd[i],prefixgcd[nums.size()-1-i]);

        }
        return sum ;



    }
};