class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int l=0,h=nums.size()-1;
        while(l<h){
            int mid=l+(h-l)/2;
            if(nums[mid]==nums[mid+1]){
                mid=mid-1;
            }
            if((mid-l+1)%2==0){
                l=mid+1;
            }
            else{
                h=mid;
            }
        }
        return nums[l];
    }
};
