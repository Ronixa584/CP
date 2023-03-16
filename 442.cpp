class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0){//If negative no alrady present in array means it is an duplicate number in array.
                v.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];//By using this we are making number negative 
        }
        return v;
    }
};
