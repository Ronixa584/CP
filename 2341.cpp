class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int c=0,s=0;
        for(auto i:m){
            c=c+(i.second/2);
            s=s+(i.second%2);
        }
        return {c,s};
    }
};
