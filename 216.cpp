class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>output;
        vector<int>temp;
        sum(output,temp,k,n,1);
        return output;
    }

    void sum(vector<vector<int>>&output,vector<int>&temp,int k,int n,int i){
        if(temp.size()==k){
            if(n==0){
                output.push_back(temp);
            }
            return;
        }
        for(int j=i;j<=9;j++){
            if(j>n) break;
            temp.push_back(j);
            sum(output,temp,k,n-j,j+1);
            temp.pop_back();
        }
    }
};
