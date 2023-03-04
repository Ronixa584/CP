class Solution {
private: 
    void subsets(vector<int> nums, vector<vector<int>> &output, vector<int> temp, int i){
        if(nums.size()==i){
            output.push_back(temp);
            return;
        }
        // Exclude Element
        subsets(nums, output, temp, i+1);
        // Include Element
        temp.push_back(nums[i]);
        subsets(nums, output, temp, i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> temp;
        subsets(nums, output, temp, 0);
        return output;
    }
};




