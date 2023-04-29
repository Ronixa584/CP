class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto i:nums){
            for(auto j:i){
                m[j]++;
            }
        }
        for(auto i:m){
            if(i.second==nums.size()){
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        }
};
