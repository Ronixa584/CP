class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp=nums;
        set<vector<int>>s1;
        int s=nums.size();
        com(temp,s1,0,s);

        for(auto i:s1){
            ans.push_back(i);
        }
        return ans;
    }

    void com(vector<int>temp,set<vector<int>>&s1,int i,int s){
        if(i==s){
            s1.insert(temp);
            return;
        }
        for(int j=i;j<s;j++){
            swap(temp[i],temp[j]);
            com(temp,s1,i+1,s);
        }
    }
};
