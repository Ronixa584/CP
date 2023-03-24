class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
                ans+=c;
            }else{
                c=0;
            }
        }
        return ans;
    }
};
