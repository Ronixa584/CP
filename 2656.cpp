class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int ans=0,t=nums[0];
        for(auto i=0;i<k;i++){
            ans+=t;
            t=t+1;
        }
        return ans;
    }
};
