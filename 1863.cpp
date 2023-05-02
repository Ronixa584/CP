class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        vector<vector<int>>output;
        vector<int>temp;
        subsets(nums,output,temp,0);
        for(int i=0;i<output.size();i++){
            int x=0;
            for(int j=0;j<output[i].size();j++){
                x=x^output[i][j];
            }
            ans+=x;
        }
        return ans;
    }

    void subsets(vector<int>nums,vector<vector<int>>&output, vector<int>temp,int i){
        if(i==nums.size()){
            output.push_back(temp);
            return;
        }
        // Exclude Element
        subsets(nums,output,temp,i+1);
        // Include Element
        temp.push_back(nums[i]);
        subsets(nums,output,temp,i+1);
    }
};
