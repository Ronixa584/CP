class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]+nums[i+1]>nums[i+2]){
                p=max(p,nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        return p;
    }
};
