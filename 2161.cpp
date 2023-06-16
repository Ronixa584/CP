class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>t1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                t1.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                t1.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                t1.push_back(nums[i]);
            }
        }
        return t1;
    }
};
