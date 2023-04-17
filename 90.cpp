class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        set<vector<int>>output;
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        subsets(nums,output,temp,0);
        for(auto i: output){
            ans.push_back(i);
        }
        return ans;
    }

    void subsets(vector<int>nums,set<vector<int>>&output,vector<int>temp,int i){
        if(nums.size()==i){
            output.insert(temp);
            return;
        }
        subsets(nums,output,temp,i+1);
        temp.push_back(nums[i]);
        subsets(nums,output,temp,i+1);
    }
};
