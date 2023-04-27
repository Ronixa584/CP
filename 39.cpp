class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>output;
        vector<int>temp;
        cs(output,temp,candidates,0,target);
        return output;
    }

    void cs(vector<vector<int>>&output,vector<int>&temp,vector<int>& candidates,int i,int target){
        if(i==candidates.size()){
            if(target==0) output.push_back(temp);
            return;
        }
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            cs(output,temp,candidates,i,target-candidates[i]);
            temp.pop_back();
        }
        cs(output,temp,candidates,i+1,target);

    }
};
