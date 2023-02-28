class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size()-1;
        int ans1=nums[s]*nums[s-1]*nums[s-2];
        int ans2=nums[s]*nums[0]*nums[1];
        int m=max(ans1,ans2);
        return m;
        
    }
};
