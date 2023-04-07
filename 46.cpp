class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        int s=nums.size();
        permutation(nums,0,s,v);
        return v;
    }

    void permutation(vector<int>nums,int i,int s,vector<vector<int>> &v){
        if(i==s){
            v.push_back(nums);
            return;
        }
        for(int j=i;j<s;j++){
            swap(nums[i],nums[j]);
            permutation(nums,i+1,s,v);
        }
    }
};
