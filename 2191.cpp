class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        multimap<int,int>mp;
        for(auto i:nums){
            string s=to_string(i);
            int a=0;
            for(auto x:s){
                int y=x-'0';
                a=a*10 + mapping[y];
            }
            mp.insert({a,i});
        }
        nums.clear();
        for(auto it:mp){
            nums.push_back(it.second);
        }
        return nums;
    }
};
