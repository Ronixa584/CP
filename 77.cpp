class Solution {
public:
    void com(vector<vector<int>>&output,vector<int>&temp,int start,int k,int n){
        if(temp.size()==k){
            output.push_back(temp);
            return;
        }
        for(auto i=start;i<=n;i++){
            // cout<<i<<" ";
            temp.push_back(i);
            com(output,temp,i+1,k,n);
            temp.pop_back();
        }
    }


    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>output;
        vector<int>temp;
        com(output,temp,1,k,n);
        return output;
    }
};
